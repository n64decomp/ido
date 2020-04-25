#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <inttypes.h>
#include <vector>
#include <set>
#include <map>
#include <string>

#include <capstone/capstone.h>

#include "mipsdisasm.h"
#include "utils.h"

#define MIPSDISASM_VERSION "0.3"

#define vec(type) vector<type>

#define vec_alloc(v, initial_capacity) do { \
   (v).reserve(initial_capacity); \
} while (0)

#define vec_free(v) do { \
   (v).clear(); \
} while (0)

#define vec_push(v) ((v).resize((v).size() + 1), &(v).back())

using namespace std;

typedef struct
{
   char name[60];
   unsigned int vaddr;
   unsigned int size;
   uint8_t is_global: 1;
   set<string> referenced_by;
} asm_label;

typedef struct
{
   unsigned int offset;
   char name[60];
   int addend;
} asm_reloc;

typedef struct
{
   // copied from cs_insn structure
   unsigned int id;
   uint8_t bytes[4];
   char op_str[32];
   char mnemonic[16];
   cs_mips_op operands[8];
   uint8_t op_count;
   // n64split-specific data
   uint8_t is_jump: 1;
   uint8_t is_global_got_memop: 1;
   uint8_t is_gp_prolog: 1;
   uint8_t has_jtbl: 1;
   uint8_t newline: 1;
   int linked_insn;
   union
   {
      unsigned int linked_value;
      float linked_float;
   };
   const char* label;
} disasm_data;

typedef struct _asm_block
{
   vector<asm_label> locals;
   disasm_data *instructions;
   int instruction_count;
   unsigned int offset;
   unsigned int length;
   unsigned int vaddr;
} asm_block;

typedef struct _rodata_entry
{
   unsigned int vaddr;
   unsigned int num_cases;
} rodata_entry;

typedef struct _data_entry
{
   unsigned int vaddr;
   unsigned int is_global;
} data_entry;

// hidden disassembler state struct
typedef struct _disasm_state
{
   set<unsigned int> function_entry_points;
   map<unsigned int, set<unsigned int>> vaddr_references;

   vector<asm_label> globals;
   vector<asm_reloc> relocs;
   vector<asm_block> blocks;
   vector<rodata_entry> rodatas;
   vector<uint32_t> datas;
   vector<uint32_t> bsss;

   unsigned int gp;
   unsigned int gp_adj;
   unsigned int *got_locals;
   unsigned int got_locals_length;
   global_got_entry *got_globals;
   unsigned int got_globals_length;

   unsigned char *rodata;
   unsigned int rodata_vaddr;
   unsigned int rodata_length;

   unsigned char *data;
   unsigned int data_vaddr;
   unsigned int data_length;

   unsigned char *bss;
   unsigned int bss_vaddr;
   unsigned int bss_length;

   csh handle;

   asm_syntax syntax;
   int merge_pseudo;
   int emit_glabel;
   int inspect_pic;
   int remove_pic;
} disasm_state;

static void labels_add(vec(asm_label) *vec, const char *name, unsigned int vaddr, unsigned int size, bool is_global)
{
   asm_label *l = vec_push(*vec);
   // if name is null, generate based on vaddr
   if (name == NULL) {
      sprintf(l->name, "L%08X", vaddr);
   } else {
      strcpy(l->name, name);
   }
   l->vaddr = vaddr;
   l->size = size;
   l->is_global = is_global;
}

static int label_cmp(const void *a, const void *b)
{
   const asm_label *ala = (const asm_label *)a;
   const asm_label *alb = (const asm_label *)b;
   // first sort by vaddr, then by name
   if (ala->vaddr > alb->vaddr) {
      return 1;
   } else if (alb->vaddr > ala->vaddr) {
      return -1;
   } else {
      return strcmp(ala->name, alb->name);
   }
}

static int reloc_cmp(const void *a, const void *b)
{
   const asm_reloc *ara = (const asm_reloc *)a;
   const asm_reloc *arb = (const asm_reloc *)b;
   return (ara->offset > arb->offset) - (arb->offset > ara->offset);
}

static int rodata_cmp(const void *a, const void *b)
{
   const rodata_entry *ra = (const rodata_entry *)a;
   const rodata_entry *rb = (const rodata_entry *)b;
   return (ra->vaddr > rb->vaddr) - (rb->vaddr > ra->vaddr);
}

static int uint32_t_cmp(const void *a, const void *b) {
   const uint32_t *ua = (const uint32_t *)a;
   const uint32_t *ub = (const uint32_t *)b;
   return (*ua > *ub) - (*ub > *ua);
}

static void labels_sort(vec(asm_label) *vec)
{
   qsort(&(*vec)[0], vec->size(), sizeof((*vec)[0]), label_cmp);
}

static void relocs_sort(vec(asm_reloc) *vec)
{
   qsort(&(*vec)[0], vec->size(), sizeof((*vec)[0]), reloc_cmp);
}

static void rodatas_sort(vec(rodata_entry) *vec)
{
   qsort(&(*vec)[0], vec->size(), sizeof((*vec)[0]), rodata_cmp);
}

static void uint32_t_sort(vec(uint32_t) *vec)
{
   qsort(&(*vec)[0], vec->size(), sizeof((*vec)[0]), uint32_t_cmp);
}

// vec: label vector to search in
// vaddr: virtual address to find
// returns index in vec->items if found, -1 otherwise
static int labels_find(const vector<asm_label> *vec, unsigned int vaddr)
{
   for (size_t i = 0; i < vec->size(); i++) {
      if ((*vec)[i].vaddr == vaddr) {
         return i;
      }
   }
   return -1;
}

void disasm_add_data_addr(disasm_state *state, unsigned int addr)
{
   if (state->rodata != NULL && addr >= state->rodata_vaddr && addr < state->rodata_vaddr + state->rodata_length) {
      for (size_t i = 0; i < state->rodatas.size(); i++) {
         if (state->rodatas[i].vaddr == addr) {
            return;
         }
      }
      rodata_entry *e = vec_push(state->rodatas);
      e->vaddr = addr;
      e->num_cases = 0;
   }

   if (state->data != NULL && addr >= state->data_vaddr && addr < state->data_vaddr + state->data_length) {
      for (size_t i = 0; i < state->datas.size(); i++) {
         if (state->datas[i] == addr) {
            return;
         }
      }
      *vec_push(state->datas) = addr;
   }

   if (state->bss != NULL && addr >= state->bss_vaddr && addr < state->bss_vaddr + state->bss_length) {
      for (size_t i = 0; i < state->bsss.size(); i++) {
         if (state->bsss[i] == addr) {
            return;
         }
      }
      *vec_push(state->bsss) = addr;
   }
}

static const char *sprintf_local_label(disasm_state *state, unsigned int addr) {
   static char buf[32];
   if (state->rodata != NULL && addr >= state->rodata_vaddr && addr < state->rodata_vaddr + state->rodata_length) {
      sprintf(buf, "RO_%08X", addr);
   } else if (state->data != NULL && addr >= state->data_vaddr && addr < state->data_vaddr + state->data_length) {
      sprintf(buf, "D_%08X", addr);
   } else if (state->bss != NULL && addr >= state->bss_vaddr && addr < state->bss_vaddr + state->bss_length) {
      sprintf(buf, "B_%08X", addr);
   } else {
      sprintf(buf, "func_%08X", addr);
   }
   return buf;
}

// try to find a matching LUI for a given register
static void link_with_lui(disasm_state *state, int block_id, int offset, unsigned int reg, int mem_imm)
{
   asm_block *block = &state->blocks[block_id];
#define MAX_LOOKBACK 128
   disasm_data *insn = block->instructions;
   // don't attempt to compute addresses for zero offset
   if (mem_imm != 0x0 || 1) {
      // end search after some sane max number of instructions
      int end_search = MAX(0, offset - MAX_LOOKBACK);
      for (int search = offset - 1; search >= end_search; search--) {
         // use an `if` instead of `case` block to allow breaking out of the `for` loop
         if (insn[search].id == MIPS_INS_LUI) {
            unsigned int rd = insn[search].operands[0].reg;
            if (reg == rd) {
               if (!state->inspect_pic) {
                  unsigned int lui_imm = (unsigned int)insn[search].operands[1].imm;
                  unsigned int addr = ((lui_imm << 16) + mem_imm);
                  insn[search].linked_insn = offset;
                  insn[search].linked_value = addr;
                  insn[offset].linked_insn = search;
                  insn[offset].linked_value = addr;
                  // if not ORI, create global data label if one does not exist
                  if (insn[offset].id != MIPS_INS_ORI) {
                     int label = labels_find(&state->globals, addr);
                     if (label < 0) {
                        char label_name[32];
                        sprintf(label_name, "D_%08X", addr);
                        labels_add(&state->globals, label_name, addr, 0, true);
                     }
                  }
               }
               break;
            }
         } else if (insn[search].id == MIPS_INS_LW ||
                    insn[search].id == MIPS_INS_LD ||
                    insn[search].id == MIPS_INS_ADDIU ||
                    //insn[search].id == MIPS_INS_ADDU || used in jump tables for offset
                    insn[search].id == MIPS_INS_ADD ||
                    insn[search].id == MIPS_INS_SUB ||
                    insn[search].id == MIPS_INS_SUBU) {
            unsigned int rd = insn[search].operands[0].reg;
            if (reg == rd) {
               if (insn[search].id == MIPS_INS_LW && insn[search].operands[1].mem.base == MIPS_REG_GP && state->inspect_pic) {
                  int mem_imm0 = (int)insn[search].operands[1].mem.disp;
                  unsigned int got_entry = (mem_imm0 + state->gp_adj) / sizeof(unsigned int);
                  if (got_entry < state->got_locals_length) {
                     unsigned int addr = state->got_locals[got_entry] + mem_imm;
                     insn[search].linked_insn = offset;
                     insn[search].linked_value = addr;
                     insn[offset].linked_insn = search;
                     insn[offset].linked_value = addr;

                     state->vaddr_references[addr].insert(block->vaddr + offset * 4);

                     if (state->remove_pic) {
                        // let's fake a lui to make it look like non-shared code
                        insn[search].id = MIPS_INS_LUI;
                        strcpy(insn[search].mnemonic, "lui");
                     }

                     int label = labels_find(&state->globals, addr);
                     if (label < 0) {
                        disasm_add_data_addr(state, addr);

                        labels_add(&state->globals, sprintf_local_label(state, addr), addr, 0, false);
                     }
                  }
                  break;
               } else {
                  // ignore: reg is pointer, offset is probably struct data member
                  break;
               }
            }
         } else if (insn[search].id == MIPS_INS_JR &&
               insn[search].operands[0].reg == MIPS_REG_RA && offset - search >= 2) {
            // stop looking when previous `jr ra` is hit,
            // but ignore if `offset` is branch delay slot for this `jr ra`
            break;
         }
      }
   }
}

// for a given `jalr t9`, find the matching t9 load
static void link_with_jalr(disasm_state *state, int block_id, int offset)
{
   asm_block *block = &state->blocks[block_id];
   disasm_data *insn = block->instructions;

   // end search after some sane max number of instructions
   int end_search = MAX(0, offset - MAX_LOOKBACK);
   for (int search = offset - 1; search >= end_search; search--) {
      if (insn[search].operands[0].reg == MIPS_REG_T9) {
         if (insn[search].id == MIPS_INS_LW) {
            if (insn[search].is_global_got_memop) {
               insn[search].linked_insn = offset;
               insn[offset].linked_insn = search;
               insn[offset].linked_value = insn[search].linked_value;
               insn[offset].label = insn[search].label;
               state->function_entry_points.insert(insn[search].linked_value);
            }
            break;
         } else if (insn[search].id == MIPS_INS_ADDIU) {
            if (insn[search].linked_insn != -1) {
               state->function_entry_points.insert(insn[search].linked_value);
               if (state->remove_pic) {
                  unsigned int first = insn[search].linked_insn;
                  insn[search].linked_insn = offset;
                  insn[offset].linked_insn = first;
                  insn[offset].linked_value = insn[search].linked_value;
               }
            }
            break;
         } else if (insn[search].id == MIPS_INS_LD ||
                    insn[search].id == MIPS_INS_ADDU ||
                    insn[search].id == MIPS_INS_ADD ||
                    insn[search].id == MIPS_INS_SUB ||
                    insn[search].id == MIPS_INS_SUBU) {
            break;
         }
      } else if (insn[search].id == MIPS_INS_JR &&
            insn[search].operands[0].reg == MIPS_REG_RA) {
         // stop looking when previous `jr ra` is hit
         break;
      }
   }
}

// disassemble a block of code and collect JALs and local labels
static void disassemble_block(unsigned char *data, unsigned int length, unsigned int vaddr, disasm_state *state, int block_id)
{
   asm_block *block = &state->blocks[block_id];

   // capstone structures require a lot of data, so only request a small block at a time and preserve the required data
   int remaining = length;
   int processed = 0;
   block->instruction_count = 0;
   block->instructions = (disasm_data *)calloc(length / 4, sizeof(*block->instructions));
   while (remaining > 0) {
      cs_insn *insn;
      int current_len = MIN(remaining, 1024);
      int count = cs_disasm(state->handle, &data[processed], current_len, vaddr + processed, 0, &insn);
      for (int i = 0; i < count; i++) {
         disasm_data *dis_insn = &block->instructions[block->instruction_count + i];
         dis_insn->id = insn[i].id;
         memcpy(dis_insn->bytes, insn[i].bytes, sizeof(dis_insn->bytes));
         strcpy(dis_insn->mnemonic, insn[i].mnemonic);
         strcpy(dis_insn->op_str,   insn[i].op_str);
         if (insn[i].detail != NULL && insn[i].detail->mips.op_count > 0) {
            dis_insn->op_count = insn[i].detail->mips.op_count;
            memcpy(dis_insn->operands, insn[i].detail->mips.operands, sizeof(dis_insn->operands));
         } else {
            dis_insn->op_count = 0;
         }
         dis_insn->is_jump = cs_insn_group(state->handle, &insn[i], MIPS_GRP_JUMP) || insn[i].id == MIPS_INS_JAL || insn[i].id == MIPS_INS_BAL || insn[i].id == MIPS_INS_JALR;
      }
      cs_free(insn, count);
      block->instruction_count += count;
      processed += count * 4;
      remaining = length - processed;
   }

   if (block->instruction_count > 0) {
      disasm_data *insn = block->instructions;
      for (int i = 0; i < block->instruction_count; i++) {
         insn[i].linked_insn = -1;
         if (insn[i].is_jump) {
            // flag for newline two instructions after `jr ra` or `j`
            if ( ((insn[i].id == MIPS_INS_JR || insn[i].id == MIPS_INS_JALR) && insn[i].operands[0].reg == MIPS_REG_RA) ||
                   insn[i].id == MIPS_INS_J) {
               if (i + 2 < block->instruction_count) {
                   insn[i + 2].newline = 1;
               }
            }

            if (insn[i].id == MIPS_INS_JAL || insn[i].id == MIPS_INS_BAL || insn[i].id == MIPS_INS_J) {
               unsigned int jal_target  = (unsigned int)insn[i].operands[0].imm;
               // create label if one does not exist
               if (labels_find(&state->globals, jal_target) < 0) {
                  char label_name[32];
                  sprintf(label_name, "func_%08X", jal_target);
                  labels_add(&state->globals, label_name, jal_target, 0, !state->inspect_pic);
               }
            } else if (insn[i].id == MIPS_INS_JR) {
               // sltiu $at, $ty, z
               // sw    $reg, offset($sp)   (very seldom, one or more, usually in func entry)
               // lw    $gp, offset($sp)    (if PIC, and very seldom)
               // beqz  $at, .L
               // some other instruction    (not always)
               // lui   $at, %hi(jtbl)
               // sll   $tx, $ty, 2
               // addu  $at, $at, $tx
               // lw    $tx, %lo(jtbl)($at)
               // nop                       (code compiled with 5.3)
               // addu  $tx, $tx, $gp       (if PIC)
               // jr    $tx
               if (i >= 7 && state->rodata != NULL) {
                  int is_pic = insn[i - 1].id == MIPS_INS_ADDU && insn[i - 1].operands[2].reg == MIPS_REG_GP;
                  int has_nop = insn[i - is_pic - 1].id == MIPS_INS_NOP;
                  int has_extra = insn[i - is_pic - has_nop - 5].id != MIPS_INS_BEQZ;
                  int lw = i - is_pic - has_nop - 1;
                  if (insn[lw].id == MIPS_INS_LW && insn[lw].linked_insn != -1) {
                     int sltiu_index = -1;
                     for (int j = 5; j <= 14; j++) {
                        if (insn[lw - has_extra - j].id == MIPS_INS_SLTIU) {
                           sltiu_index = j;
                           break;
                        }
                     }
                     if (sltiu_index != -1 && insn[lw - has_extra - sltiu_index].id == MIPS_INS_SLTIU) {
                        unsigned int num_cases = insn[lw - has_extra - sltiu_index].operands[2].imm;
                        unsigned int jtbl_addr = insn[lw].linked_value;
                        //printf("jump table at %08x, size %u\n", jtbl_addr, num_cases);

                        int jtbl_label = labels_find(&state->globals, jtbl_addr);
                        if (jtbl_label >= 0) {
                           sprintf(state->globals[jtbl_label].name, "jtbl_%08X", jtbl_addr);
                        }

                        insn[i].has_jtbl = 1;

                        rodata_entry *e = &state->rodatas[state->rodatas.size() - 1];
                        if (e->vaddr != jtbl_addr) {
                           ERROR("expected jump table entry\n");
                           exit(EXIT_FAILURE);
                        }
                        e->vaddr = jtbl_addr;
                        e->num_cases = num_cases;

                        if (jtbl_addr < state->rodata_vaddr || jtbl_addr + num_cases * sizeof(unsigned int) > state->rodata_vaddr + state->rodata_length) {
                           ERROR("jump table outside rodata\n");
                           exit(EXIT_FAILURE);
                        }
                        for (unsigned int i = 0; i < num_cases; i++) {
                           unsigned int target_addr = read_u32_be(state->rodata + (jtbl_addr - state->rodata_vaddr) + i * sizeof(unsigned int));
                           if (is_pic) {
                              target_addr += state->gp;
                           }
                           //printf("%08X\n", target_addr);
                           char label_name[32];
                           int label = labels_find(&block->locals, target_addr);
                           if (label < 0) {
                              sprintf(label_name, ".L%08X", target_addr);
                              labels_add(&block->locals, label_name, target_addr, num_cases * sizeof(unsigned int), false);
                           }
                        }
                     }
                  }
               }
            } else {
               // all branches and jumps
               for (int o = 0; o < insn[i].op_count; o++) {
                  if (insn[i].operands[o].type == MIPS_OP_IMM) {
                     char label_name[32];
                     unsigned int branch_target = (unsigned int)insn[i].operands[o].imm;
                     // create label if one does not exist
                     int label = labels_find(&block->locals, branch_target);
                     if (label < 0) {
                        switch (state->syntax) {
                           case ASM_GAS:    sprintf(label_name, ".L%08X", branch_target); break;
                           case ASM_ARMIPS: sprintf(label_name, "@L%08X", branch_target); break;
                        }
                        labels_add(&block->locals, label_name, branch_target, 0, false);
                     }
                  }
               }
            }
         }

         if (state->merge_pseudo) {
            switch (insn[i].id) {
               // find floating point LI
               case MIPS_INS_MTC1:
               {
                  unsigned int rt = insn[i].operands[0].reg;
                  for (int s = i - 1; s >= 0; s--) {
                     if (insn[s].id == MIPS_INS_LUI && insn[s].operands[0].reg == rt) {
                        float f;
                        uint32_t lui_imm = (uint32_t)(insn[s].operands[1].imm << 16);
                        memcpy(&f, &lui_imm, sizeof(f));
                        // link up the LUI with this instruction and the float
                        insn[s].linked_insn = i;
                        insn[s].linked_float = f;
                        // rewrite LUI instruction to be LI
                        insn[s].id = MIPS_INS_LI;
                        strcpy(insn[s].mnemonic, "li");
                        break;
                     } else if (insn[s].id == MIPS_INS_LW ||
                                insn[s].id == MIPS_INS_LD ||
                                insn[s].id == MIPS_INS_LH ||
                                insn[s].id == MIPS_INS_LHU ||
                                insn[s].id == MIPS_INS_LB ||
                                insn[s].id == MIPS_INS_LBU ||
                                insn[s].id == MIPS_INS_ADDIU ||
                                insn[s].id == MIPS_INS_ADD ||
                                insn[s].id == MIPS_INS_SUB ||
                                insn[s].id == MIPS_INS_SUBU) {
                        unsigned int rd = insn[s].operands[0].reg;
                        if (rt == rd) {
                           break;
                        }
                     } else if (insn[s].id == MIPS_INS_JR &&
                                insn[s].operands[0].reg == MIPS_REG_RA) {
                        // stop looking when previous `jr ra` is hit
                        break;
                     }
                  }
                  break;
               }
               case MIPS_INS_SD:
               case MIPS_INS_SW:
               case MIPS_INS_SH:
               case MIPS_INS_SB:
               case MIPS_INS_LB:
               case MIPS_INS_LBU:
               case MIPS_INS_LD:
               case MIPS_INS_LDL:
               case MIPS_INS_LDR:
               case MIPS_INS_LH:
               case MIPS_INS_LHU:
               case MIPS_INS_LW:
               case MIPS_INS_LWU:
               case MIPS_INS_LWC1:
               case MIPS_INS_LWC2:
               case MIPS_INS_LWC3:
               case MIPS_INS_SWC1:
               case MIPS_INS_SWC2:
               case MIPS_INS_SWC3:
               {
                  unsigned int mem_rs = insn[i].operands[1].mem.base;
                  int mem_imm = (int)insn[i].operands[1].mem.disp;
                  if (mem_rs == MIPS_REG_GP && state->inspect_pic) {
                     unsigned int got_entry = (mem_imm + state->gp_adj) / sizeof(unsigned int);
                     if (got_entry >= state->got_locals_length) {
                        got_entry -= state->got_locals_length;
                        if (got_entry < state->got_globals_length) {
                           //printf("gp 0x%08x %s\n", mem_imm, state->got_globals[got_entry].name);
                           unsigned int dest_vaddr = state->got_globals[got_entry].vaddr;
                           insn[i].is_global_got_memop = 1;
                           insn[i].linked_value = dest_vaddr;
                           insn[i].label = state->got_globals[got_entry].name;

                           state->vaddr_references[dest_vaddr].insert(vaddr + i * 4);
                           //disasm_add_data_addr(state, dest_vaddr);
                        }
                     }
                  } else {
                     link_with_lui(state, block_id, i, mem_rs, mem_imm);
                  }
                  break;
               }
               case MIPS_INS_ADDIU:
               case MIPS_INS_ORI:
               {
                  unsigned int rd = insn[i].operands[0].reg;
                  unsigned int rs = insn[i].operands[1].reg;
                  int64_t imm = insn[i].operands[2].imm;
                  if (rs == MIPS_REG_ZERO) { // becomes LI
                     insn[i].id = MIPS_INS_LI;
                     strcpy(insn[i].mnemonic, "li");
                     // TODO: is there allocation for this?
                     sprintf(insn[i].op_str, "$%s, %" PRIi64, cs_reg_name(state->handle, rd), imm);
                  } else if (rd == rs && rd != MIPS_REG_GP) { // only look for LUI if rd and rs are the same
                     link_with_lui(state, block_id, i, rs, (int)imm);
                  }
                  break;
               }
               case MIPS_INS_JALR:
               {
                  unsigned int r = insn[i].operands[0].reg;
                  if (r == MIPS_REG_T9 && state->inspect_pic) {
                     link_with_jalr(state, block_id, i);
                  }
                  break;
               }
            }
         }

         if (insn[i].id == MIPS_INS_ADDU && insn[i].operands[0].reg == MIPS_REG_GP && insn[i].operands[1].reg == MIPS_REG_GP && insn[i].operands[2].reg == MIPS_REG_T9 && i >= 2 && state->inspect_pic) {
            insn[i].is_gp_prolog = 1;
            insn[i - 1].is_gp_prolog = 1;
            insn[i - 2].is_gp_prolog = 1;
            state->function_entry_points.insert(vaddr + (i - 2) * 4);
         }
      }
   } else {
      ERROR("Error: Failed to disassemble 0x%X bytes of code at 0x%08X\n", (unsigned int)length, vaddr);
   }
}

disasm_state *disasm_state_init(asm_syntax syntax, int merge_pseudo, int emit_glabel, int inspect_pic, int remove_pic)
{
   disasm_state *state = new disasm_state();
   vec_alloc(state->globals, 128);
   vec_alloc(state->relocs, 128);
   vec_alloc(state->blocks, 128);
   vec_alloc(state->rodatas, 128);
   vec_alloc(state->datas, 128);
   vec_alloc(state->bsss, 128);

   state->gp = 0;
   state->gp_adj = 0;
   state->got_locals = NULL;
   state->got_locals_length = 0;
   state->got_globals = NULL;
   state->got_globals_length = 0;

   state->rodata = NULL;
   state->rodata_vaddr = 0;
   state->rodata_length = 0;
   state->data = NULL;
   state->data_vaddr = 0;
   state->data_length = 0;
   state->bss = NULL;
   state->bss_vaddr = 0;
   state->bss_length = 0;

   state->syntax = syntax;
   state->merge_pseudo = merge_pseudo;
   state->emit_glabel = emit_glabel;
   state->inspect_pic = inspect_pic;
   state->remove_pic = remove_pic;

   // open capstone disassembler
   if (cs_open(CS_ARCH_MIPS, (cs_mode)(CS_MODE_MIPS64 | CS_MODE_BIG_ENDIAN), &state->handle) != CS_ERR_OK) {
      ERROR("Error initializing disassembler\n");
      exit(EXIT_FAILURE);
   }
   cs_option(state->handle, CS_OPT_DETAIL, CS_OPT_ON);

   // This is kinda sketchy; the capstone documentation says that cs_insn->detail
   // is undefined when CS_OPT_SKIPDATA is set. But it's useful.
   cs_option(state->handle, CS_OPT_SKIPDATA, CS_OPT_ON);

   return state;
}

void disasm_state_free(disasm_state *state)
{
   if (state) {
      for (size_t i = 0; i < state->blocks.size(); i++) {
         asm_block *block = &state->blocks[i];
         free(block->instructions);
         vec_free(block->locals);
         block->instructions = NULL;
      }
      free(state->bss);
      free(state->data);
      free(state->rodata);
      free(state->got_locals);
      free(state->got_globals);
      vec_free(state->rodatas);
      vec_free(state->blocks);
      vec_free(state->relocs);
      vec_free(state->globals);
      cs_close(&state->handle);
      delete state;
   }
}

void disasm_label_add(disasm_state *state, const char *name, unsigned int vaddr, unsigned int size, bool is_global)
{
   labels_add(&state->globals, name, vaddr, size, is_global);
}

int disasm_label_lookup(const disasm_state *state, unsigned int vaddr, char *name)
{
   int id = labels_find(&state->globals, vaddr);
   if (id >= 0) {
      strcpy(name, state->globals[id].name);
      return 1;
   } else {
      sprintf(name, "0x%08X", vaddr);
      return 0;
   }
}

void disasm_reloc_add(disasm_state *state, unsigned int offset, const char *name, int addend)
{
   asm_reloc *r = vec_push(state->relocs);
   r->offset = offset;
   strcpy(r->name, name);
   r->addend = addend;
}

void disasm_got_entries_set(disasm_state *state, unsigned int gp, unsigned int gp_adj, unsigned int *local_entries, unsigned int locals_length, global_got_entry *global_entries, unsigned int globals_length)
{
   state->gp = gp;
   state->gp_adj = gp_adj;
   state->got_locals = local_entries;
   state->got_locals_length = locals_length;
   state->got_globals = global_entries;
   state->got_globals_length = globals_length;
}

void disasm_rodata_set(disasm_state *state, unsigned char *rodata, unsigned int vaddr, unsigned int length)
{
   state->rodata = rodata;
   state->rodata_vaddr = vaddr;
   state->rodata_length = length;
}

void disasm_data_set(disasm_state *state, unsigned char *data, unsigned int vaddr, unsigned int length)
{
   state->data = data;
   state->data_vaddr = vaddr;
   state->data_length = length;
}

void disasm_bss_set(disasm_state *state, unsigned char *bss, unsigned int vaddr, unsigned int length)
{
   state->bss = bss;
   state->bss_vaddr = vaddr;
   state->bss_length = length;
}

void mipsdisasm_pass1(unsigned char *data, unsigned int offset, unsigned int length, unsigned int vaddr, disasm_state *state)
{
   asm_block *block = vec_push(state->blocks);
   vec_alloc(block->locals, 128);
   block->offset = offset;
   block->length = length;
   block->vaddr = vaddr;

   // collect all branch and jump targets
   disassemble_block(&data[offset], length, vaddr, state, state->blocks.size() - 1);

   // sort global and local labels and relocations
   labels_sort(&state->globals);
   labels_sort(&block->locals);
   relocs_sort(&state->relocs);
   rodatas_sort(&state->rodatas);
   uint32_t_sort(&state->datas);
   uint32_t_sort(&state->bsss);

   for (auto& target: state->vaddr_references) {
      set<unsigned int> modified;
      for (unsigned int from : target.second) {
         auto next_greater = state->function_entry_points.upper_bound(from);
         bool found_function = false;
         if (next_greater != state->function_entry_points.begin()) {
            auto prev = next_greater;
            --prev;
            if (*prev <= from) {
               // `from` lies within a function range, so replace reference by function entry address
               modified.insert(*prev);
               found_function = true;
            }
         }
         if (!found_function) {
            modified.insert(from);
         }
      }
      target.second.swap(modified);
   }
}

static asm_label *global_got_find_label(disasm_state *state, unsigned int vaddr)
{
   for (auto& label : state->globals) {
      if (label.vaddr == vaddr) {
         return label.is_global ? &label : NULL;
      }
   }
   /*for (unsigned int i = 0; i < state->got_globals_length; i++) {
      if (state->got_globals[i].vaddr == vaddr) {
         return state->got_globals[i].name;
      }
   }*/
   return NULL;
}

static void print_references(FILE *out, disasm_state *state, unsigned int vaddr)
{
   if (state->vaddr_references.find(vaddr) != state->vaddr_references.end()) {
      for (unsigned int from : state->vaddr_references[vaddr]) {
         fprintf(out, "    # %08X", from);
         asm_label *label = global_got_find_label(state, from);
         if (label != NULL) {
            fprintf(out, " %s", label->name);
         } else {
            int label_index = labels_find(&state->globals, from);
            if (label_index >= 0) {
               fprintf(out, " %s", state->globals[label_index].name);
            }
         }
         fprintf(out, "\n");
      }
   }
}

static void inspect_string(const char *start, const char *end, bool *found_null, bool *found_non_printable, const char **last_null, const char **last_printable) {
   *found_null = false;
   *found_non_printable = false;
   *last_printable = NULL;
   for (const char *pos = start; pos != end; pos++) {
      if (*pos == '\0') {
         *found_null = 1;
         *last_null = pos;
      } else if ((*pos >= 0x20 && *pos <= 0x7E) || *pos == '\t' || *pos == '\n') {
         *last_printable = pos;
         continue;
      } else {
         *found_non_printable = true;
      }
   }
}

static void print_escaped_string(FILE *out, const char *data, const char *end) {
   for (const char *pos = data; pos < end; pos++) {
      if (*pos == '"') {
         fprintf(out, "\\\"");
      } else if (*pos == '\n') {
         fprintf(out, "\\n");
      } else if (*pos == '\t') {
         fprintf(out, "\\t");
      } else if (*pos >= 0x20 && *pos <= 0x7E) {
         fprintf(out, "%c", *pos);
      } else {
         fprintf(out, "\\x%02d", (unsigned char)*pos);
      }
   }
}

void disasm_print_rodata(FILE *out, disasm_state *state, unsigned int vaddr_start, unsigned int vaddr_end)
{
   bool printed_header = false;
   for (size_t i = 0; i < state->rodatas.size(); i++) {
      unsigned int vaddr = state->rodatas[i].vaddr;
      if (vaddr < vaddr_start) {
         continue;
      }
      if (vaddr >= vaddr_end) {
         break;
      }
      if (!printed_header) {
         fprintf(out, ".rdata\n");
         printed_header = true;
      }
      if (state->rodatas[i].num_cases > 0) {
         fprintf(out, "    .balign 4\n");
         if (state->inspect_pic && !state->remove_pic) {
            fprintf(out, "jtbl_%08X:\n", vaddr);
         } else {
            fprintf(out, "glabel jtbl_%08X\n", vaddr);
         }
         print_references(out, state, vaddr);
         for (unsigned int j = 0; j < state->rodatas[i].num_cases; j++) {
            unsigned int target_addr = read_u32_be(state->rodata + (vaddr - state->rodata_vaddr) + j * sizeof(unsigned int));
            target_addr += state->gp;
            fprintf(out, "    %s .L%08X\n", state->inspect_pic && !state->remove_pic ? ".gpword" : ".word", target_addr);
         }
      } else {
         auto print_label = [=]() {
            if (state->inspect_pic && !state->remove_pic) {
               fprintf(out, "%s:\n", sprintf_local_label(state, vaddr));
            } else {
               fprintf(out, "glabel %s\n", sprintf_local_label(state, vaddr));
            }
            print_references(out, state, vaddr);
         };

         // check for null-terminated string
         char *data = (char *)state->rodata + (vaddr - state->rodata_vaddr);
         unsigned int end_vaddr = i + 1 < state->rodatas.size() ?
                                    state->rodatas[i + 1].vaddr :
                                    state->rodata_vaddr + state->rodata_length;
         char *end = (char *)state->rodata + (end_vaddr - state->rodata_vaddr);

         bool found_null;
         bool found_non_printable;
         const char *last_null;
         const char *last_printable;
         inspect_string(data, end, &found_null, &found_non_printable, &last_null, &last_printable);

         if (!found_non_printable) {
            print_label();
            if (found_null && last_null == end - 1) {
               // null-terminated string
               fprintf(out, "    .asciz \"");
            } else {
               fprintf(out, "    .ascii \"");
            }
            if (last_printable != NULL) {
               print_escaped_string(out, data, last_printable + 1);
            }
            fprintf(out, "\"\n");
         } else if (data != end) {
            fprintf(out, "    .balign 4\n");
            print_label();
            fprintf(out, "    .byte ");
            for (char *pos = data; pos < end; pos++) {
               if (pos != data) {
                  fprintf(out, ",");
               }
               fprintf(out, "0x%02x", *(unsigned char *)pos);
            }
            if (end - data >= 4) {
               union {
                  float f;
                  unsigned int i;
               } float_union;
               unsigned char *pos = (unsigned char *)data;
               float_union.i = (pos[0] << 24) | (pos[1] << 16) | (pos[2] << 8) | pos[3];
               fprintf(out, " # %f", float_union.f);
            }
            fprintf(out, "\n");
         }
      }
      fprintf(out, "\n");
   }
}

void disasm_print_data(FILE *out, disasm_state *state, unsigned int vaddr_start, unsigned int vaddr_end)
{
   bool printed_header = false;
   for (size_t i = 0; i < state->datas.size(); i++) {
      unsigned int vaddr = state->datas[i];
      if (vaddr < vaddr_start) {
         continue;
      }
      if (vaddr >= vaddr_end) {
         break;
      }
      if (!printed_header) {
         fprintf(out, ".data\n");
         printed_header = true;
      }
      asm_label *label = global_got_find_label(state, vaddr);
      if (label != NULL) {
         fprintf(out, "# %08X\n", vaddr);
         fprintf(out, "glabel %s\n", label->name);
      } else {
         fprintf(out, "%s:\n", sprintf_local_label(state, vaddr));
      }
      print_references(out, state, vaddr);

      unsigned char *data = state->data + (vaddr - state->data_vaddr);
      unsigned int end_vaddr = i + 1 < state->datas.size() ?
                                 state->datas[i + 1] :
                                 state->data_vaddr + state->data_length;
      if (end_vaddr > vaddr_end) {
         end_vaddr = vaddr_end;
      }
      unsigned int padding_to_add = 0;
      if (label != NULL && label->size != 0) {
         padding_to_add = end_vaddr - (vaddr + label->size);
         end_vaddr = vaddr + label->size;
      }
      unsigned char *end = state->data + (end_vaddr - state->data_vaddr);
      if (data != end) {
         bool found_null;
         bool found_non_printable;
         const char *last_null;
         const char *last_printable;
         inspect_string((const char *)data, (const char *)end, &found_null, &found_non_printable, &last_null, &last_printable);

         if (!found_non_printable && last_printable != NULL) {
            fprintf(out, "    .ascii \"");
            print_escaped_string(out, (const char *)data, (const char *)end);
            fprintf(out, "\"\n");
         } else {
            fprintf(out, "    .byte ");
            for (unsigned char *pos = data; pos < end; pos++) {
               if (pos != data) {
                  fprintf(out, ",");
               }
               fprintf(out, "0x%02x", *pos);
            }
            fprintf(out, "\n");
         }
      }
      if (label != NULL) {
         fprintf(out, "    .type %s, @object\n", label->name);
         fprintf(out, "    .size %s, .-%s # %u\n", label->name, label->name, (unsigned int)(end - data));
         if (padding_to_add != 0) {
            bool found_data_in_padding = false;
            for (unsigned int counter = 0; counter < padding_to_add; counter++) {
               if (end[counter] != 0) {
                  found_data_in_padding = true;
               }
            }
            if (!found_data_in_padding) {
               fprintf(out, "    .space %u\n", padding_to_add);
            } else {
               fprintf(out, "    .byte ");
               for (unsigned int counter = 0; counter < padding_to_add; counter++) {
                  if (counter != 0) {
                     fprintf(out, ",");
                  }
                  fprintf(out, "0x%02x", end[counter]);
               }
            }
         }
      }
      fprintf(out, "\n");
   }
   fprintf(out, "\n");
}

void disasm_print_bss(FILE *out, disasm_state *state, unsigned int vaddr_start, unsigned int vaddr_end, const set<string> *filter)
{
   bool printed_header = false;
   for (size_t i = 0; i < state->bsss.size(); i++) {
      unsigned int vaddr = state->bsss[i];
      if (vaddr < vaddr_start) {
         continue;
      }
      if (vaddr >= vaddr_end) {
         break;
      }
      asm_label *label = global_got_find_label(state, vaddr);
#if 1
      if (label != NULL && filter != NULL && filter->count(label->name) == 0) {
         continue;
      }
      if (!printed_header) {
         fprintf(out, ".bss\n");
         printed_header = true;
      }
      if (label != NULL) {
         if (filter != NULL) {
            if (label->size < 2) {
            } else if (label->size < 4) {
               fprintf(out, "    .balign 2\n");
            } else if (label->size < 8) {
               fprintf(out, "    .balign 4\n");
            } else if (label->size < 16) {
               fprintf(out, "    .balign 8\n");
            } else {
               fprintf(out, "    .balign 16\n");
            }
         }
         fprintf(out, "# %08X\n", vaddr);
         fprintf(out, "glabel %s\n", label->name);
      } else {
         fprintf(out, "%s:\n", sprintf_local_label(state, vaddr));
      }
      print_references(out, state, vaddr);

      unsigned char *data = state->bss + (vaddr - state->bss_vaddr);
      unsigned int end_vaddr = i + 1 < state->bsss.size() ?
                                 state->bsss[i + 1] :
                                 state->bss_vaddr + state->bss_length;
      if (end_vaddr > vaddr_end) {
         end_vaddr = vaddr_end;
      }
      unsigned int padding_to_add = 0;
      if (label != NULL && label->size != 0) {
         padding_to_add = end_vaddr - (vaddr + label->size);
         end_vaddr = vaddr + label->size;
      }
      unsigned char *end = state->bss + (end_vaddr - state->bss_vaddr);
      if (data != end) {
         fprintf(out, "    .space %u\n", (unsigned int)(end - data));
      }
      if (label != NULL) {
         fprintf(out, "    .size %s, %u\n", label->name, (unsigned int)(end - data));
         fprintf(out, "    .type %s, @object\n", label->name);
         if (padding_to_add != 0 && filter == NULL) {
            fprintf(out, "    .space %u\n", padding_to_add);
         }
      }
      fprintf(out, "\n");
#else
      if (label != NULL) {
         fprintf(out, "%s\n", label->name);
      }
#endif
   }
   fprintf(out, "\n");
}

void mipsdisasm_pass2(FILE *out, disasm_state *state, unsigned int offset, unsigned int vaddr_start, unsigned int vaddr_end)
{
   asm_block *block = NULL;
   unsigned int vaddr;
   asm_label *current_function = NULL;
   size_t local_idx = 0;
   size_t global_idx = 0;
   size_t reloc_idx = 0;
   int label;
   int indent = 0;
   // lookup block by offset
   for (size_t i = 0; i < state->blocks.size(); i++) {
      if (state->blocks[i].offset == offset) {
         block = &state->blocks[i];
         break;
      }
   }
   if (!block) {
      ERROR("Could not find block offset 0x%X\n", offset);
      exit(1);
   }
   //vaddr = block->vaddr;
   vaddr = vaddr_start;
   // skip labels/relocations before this section
   while ( (global_idx < state->globals.size()) && (vaddr > state->globals[global_idx].vaddr) ) {
      global_idx++;
   }
   while ( (local_idx < block->locals.size()) && (vaddr > block->locals[local_idx].vaddr) ) {
      local_idx++;
   }
   while ( (reloc_idx < state->relocs.size()) && (offset > state->relocs[reloc_idx].offset) ) {
      reloc_idx++;
   }
   fprintf(out, ".text\n");
   for (int i = (int)((vaddr_start - block->vaddr) / sizeof(unsigned int)); i < block->instruction_count && i < (int)((vaddr_end - block->vaddr) / sizeof(unsigned int)); i++) {
      disasm_data *insn = &block->instructions[i];
      // newline between functions
      if (insn->newline) {
         fprintf(out, "\n");
      }
      // insert all global labels at this address
      while ( (global_idx < state->globals.size()) && (vaddr == state->globals[global_idx].vaddr) ) {
         const char *name = state->globals[global_idx].name;
         bool is_global = state->globals[global_idx].is_global;
         if (state->emit_glabel && (!(state->inspect_pic && !state->remove_pic) || is_global)) {
            if (current_function != NULL) {
               fprintf(out, "    .type %s, @function\n", current_function->name);
               fprintf(out, "    .size %s, .-%s\n", current_function->name, current_function->name);
               fprintf(out, "    .end %s\n\n", current_function->name);
            }
            fprintf(out, "glabel %s\n", name);
            fprintf(out, "    .ent %s\n", name);
            current_function = &state->globals[global_idx];
         } else {
            if (state->function_entry_points.count(vaddr)) {
               if (current_function != NULL) {
                  fprintf(out, "    .type %s, @function\n", current_function->name);
                  fprintf(out, "    .size %s, .-%s\n", current_function->name, current_function->name);
                  fprintf(out, "    .end %s\n\n", current_function->name);
                  current_function = NULL;
               }
               fprintf(out, "    .type %s, @function\n", name);
            }
            fprintf(out, "%s:\n", name);
         }
         global_idx++;
      }
      // insert all local labels at this address
      while ( (local_idx < block->locals.size()) && (vaddr == block->locals[local_idx].vaddr) ) {
         fprintf(out, "%s:\n", block->locals[local_idx].name);
         local_idx++;
      }
      print_references(out, state, vaddr);
#if 0
      fprintf(out, "/* %06X %08X %02X%02X%02X%02X */  ", offset, vaddr, insn->bytes[0], insn->bytes[1], insn->bytes[2], insn->bytes[3]);
#else
      fprintf(out, "/* %08X %02X%02X%02X%02X */  ", vaddr, insn->bytes[0], insn->bytes[1], insn->bytes[2], insn->bytes[3]);
#endif
      // indent the lines after a jump or branch
      if (indent) {
         indent = 0;
         fputc(' ', out);
      }
      if ( (reloc_idx < state->relocs.size()) && (offset == state->relocs[reloc_idx].offset) ) {
         asm_reloc *reloc = &state->relocs[reloc_idx];
         reloc_idx++;
         fprintf(out, "%-5s ", insn->mnemonic);
         for (int o = 0; o < insn->op_count; o++) {
            cs_mips_op *op = &insn->operands[o];
            if (o > 0) {
               fprintf(out, ", ");
            }
            switch (op->type) {
               case MIPS_OP_REG:
                  fprintf(out, "$%s", cs_reg_name(state->handle, op->reg));
                  break;
               case MIPS_OP_IMM:
               case MIPS_OP_MEM:
               {
                  char strAddend[32] = {0};
                  if (reloc->addend > 0) {
                     sprintf(strAddend, " + 0x%X", reloc->addend);
                  } else if (reloc->addend < 0) {
                     sprintf(strAddend, " - 0x%X", -(unsigned)reloc->addend);
                  }
                  if (insn->id == MIPS_INS_JAL || insn->id == MIPS_INS_J) {
                     fprintf(out, "%s%s", reloc->name, strAddend);
                  } else if (insn->id == MIPS_INS_LUI) {
                     fprintf(out, "%%hi(%s%s)", reloc->name, strAddend);
                  } else {
                     fprintf(out, "%%lo(%s%s)", reloc->name, strAddend);
                  }
                  if (op->type == MIPS_OP_MEM) {
                     fprintf(out, "($%s)", cs_reg_name(state->handle, op->mem.base));
                  }
                  break;
               }
               default:
                  break;
            }
         }
         fprintf(out, "\n");
      } else if (insn->is_jump) {
         indent = 1;
         if (insn->id == MIPS_INS_JAL || insn->id == MIPS_INS_BAL || insn->id == MIPS_INS_J || (insn->id == MIPS_INS_JALR && insn->linked_insn != -1 && state->remove_pic)) {
            unsigned int jal_target;
            if (insn->id == MIPS_INS_JALR && block->instructions[insn->linked_insn].is_global_got_memop) {
               fprintf(out, "jal   %s\n", insn->label);
            } else {
               if (insn->id == MIPS_INS_JALR) {
                  fprintf(out, "jal   ");
                  jal_target = insn->linked_value;
               } else {
                  fprintf(out, "%-5s ", insn->mnemonic);
                  jal_target = (unsigned int)insn->operands[0].imm;
               }
               label = labels_find(&state->globals, jal_target);
               if (label >= 0) {
                  fprintf(out, "%s\n", state->globals[label].name);
               } else {
                  fprintf(out, "0x%08X\n", jal_target);
               }
            }
         } else {
            fprintf(out, "%-5s ", insn->mnemonic);
            for (int o = 0; o < insn->op_count; o++) {
               cs_mips_op *op = &insn->operands[o];
               if (o > 0) {
                  fprintf(out, ", ");
               }
               switch (op->type) {
                  case MIPS_OP_REG:
                     fprintf(out, "$%s", cs_reg_name(state->handle, op->reg));
                     break;
                  case MIPS_OP_IMM:
                  {
                     unsigned int branch_target = (unsigned int)op->imm;
                     label = labels_find(&block->locals, branch_target);
                     if (label >= 0) {
                        fprintf(out, "%s", block->locals[label].name);
                     } else {
                        fprintf(out, "0x%08X", branch_target);
                     }
                     break;
                  }
                  default:
                     break;
               }
            }
            fprintf(out, "\n");
         }
      } else if (insn->id == MIPS_INS_MTC0 || insn->id == MIPS_INS_MFC0) {
         // workaround bug in capstone/LLVM
         unsigned char rd;
         // 31-24 23-16 15-8 7-0
         // 0     1     2    3
         //       31-26  25-21 20-16 15-11 10-0
         // mfc0: 010000 00000   rt    rd  00000000000
         // mtc0: 010000 00100   rt    rd  00000000000
         //       010000 00100 00000 11101 000 0000 0000
         // rt = insn->bytes[1] & 0x1F;
         rd = (insn->bytes[2] & 0xF8) >> 3;
         fprintf(out, "%-5s $%s, $%d\n", insn->mnemonic,
                 cs_reg_name(state->handle, insn->operands[0].reg), rd);
      } else {
         int linked_insn = insn->linked_insn;
         if (linked_insn >= 0) {
            if (insn->id == MIPS_INS_LI) {
               // assume this is LUI converted to LI for matched MTC1
               fprintf(out, "%-5s ", insn->mnemonic);
               switch (state->syntax) {
                  case ASM_GAS:
                     fprintf(out, "$%s, 0x%04X0000 # %f\n",
                           cs_reg_name(state->handle, insn->operands[0].reg),
                           (unsigned int)insn->operands[1].imm,
                           insn->linked_float);
                     break;
                  case ASM_ARMIPS:
                     fprintf(out, "$%s, 0x%04X0000 // %f\n",
                           cs_reg_name(state->handle, insn->operands[0].reg),
                           (unsigned int)insn->operands[1].imm,
                           insn->linked_float);
                     break;
                  // TODO: this is ideal, but it doesn't work exactly for all floats since some emit imprecise float strings
                  /*
                     fprintf(out, "$%s, %f // 0x%04X\n",
                           cs_reg_name(state->handle, insn->operands[0].reg),
                           insn->linked_float,
                           (unsigned int)insn->operands[1].imm);
                     break;
                   */
               }
            } else if (insn->id == MIPS_INS_LUI) {
               label = labels_find(&state->globals, insn->linked_value);
               // assume matched LUI with ADDIU/LW/SW etc.
               switch (state->syntax) {
                  case ASM_GAS:
                     switch (block->instructions[linked_insn].id) {
                        case MIPS_INS_ADDIU:
                           fprintf(out, "%-5s $%s, %%hi(%s) # %s\n", insn->mnemonic,
                                 cs_reg_name(state->handle, insn->operands[0].reg),
                                 state->globals[label].name, insn->op_str);
                           break;
                        case MIPS_INS_ORI:
                           fprintf(out, "%-5s $%s, (0x%08X >> 16) # %s %s\n", insn->mnemonic,
                                 cs_reg_name(state->handle, insn->operands[0].reg),
                                 insn->linked_value, insn->mnemonic, insn->op_str);
                           break;
                        default: // LW/SW/etc.
                           fprintf(out, "%-5s $%s, %%hi(%s) # %s\n", insn->mnemonic,
                                 cs_reg_name(state->handle, insn->operands[0].reg),
                                 state->globals[label].name, insn->op_str);
                           break;
                     }
                     break;
                  case ASM_ARMIPS:
                     switch (block->instructions[linked_insn].id) {
                        case MIPS_INS_ADDIU:
                           fprintf(out, "%-5s $%s, %s // %s %s\n", "la.u",
                                 cs_reg_name(state->handle, insn->operands[0].reg),
                                 state->globals[label].name,
                                 insn->mnemonic, insn->op_str);
                           break;
                        case MIPS_INS_ORI:
                           fprintf(out, "%-5s $%s, 0x%08X // %s %s\n", "li.u",
                                 cs_reg_name(state->handle, insn->operands[0].reg),
                                 insn->linked_value, insn->mnemonic, insn->op_str);
                           break;
                        default: // LW/SW/etc.
                           fprintf(out, "%-5s $%s, hi(%s) // %s\n", insn->mnemonic,
                                 cs_reg_name(state->handle, insn->operands[0].reg),
                                 state->globals[label].name, insn->op_str);
                           break;
                     }
                     break;
               }
            } else if (insn->id == MIPS_INS_ADDIU) {
               label = labels_find(&state->globals, insn->linked_value);
               switch (state->syntax) {
                  case ASM_GAS:
                     fprintf(out, "%-5s $%s, %%lo(%s) # %s %s\n", insn->mnemonic,
                           cs_reg_name(state->handle, insn->operands[0].reg),
                           state->globals[label].name,
                           insn->mnemonic, insn->op_str);
                     break;
                  case ASM_ARMIPS:
                     fprintf(out, "%-5s $%s, %s // %s %s\n", "la.l",
                           cs_reg_name(state->handle, insn->operands[0].reg),
                           state->globals[label].name,
                           insn->mnemonic, insn->op_str);
                     break;
               }
            } else if (insn->id == MIPS_INS_ORI) {
               switch (state->syntax) {
                  case ASM_GAS:
                     fprintf(out, "%-5s $%s, (0x%08X & 0xFFFF) # %s %s\n", insn->mnemonic,
                           cs_reg_name(state->handle, insn->operands[0].reg),
                           insn->linked_value,
                           insn->mnemonic, insn->op_str);
                     break;
                  case ASM_ARMIPS:
                     fprintf(out, "%-5s $%s, 0x%08X // %s %s\n", "li.l",
                           cs_reg_name(state->handle, insn->operands[0].reg),
                           insn->linked_value,
                           insn->mnemonic, insn->op_str);
                     break;
               }
            } else if (insn->is_global_got_memop && block->instructions[linked_insn].id == MIPS_INS_JALR && state->remove_pic) {
               fprintf(out, "nop\n");
            } else {
               int got = insn->id == MIPS_INS_LW && insn->operands[1].mem.base == MIPS_REG_GP && state->inspect_pic && !state->remove_pic;
               int has_label = insn->is_global_got_memop;
               int call16 = got && has_label;
               if (!has_label) {
                  label = labels_find(&state->globals, insn->linked_value);
               }
               fprintf(out, "%-5s $%s, %s%s(%s)($%s)\n", insn->mnemonic,
                     cs_reg_name(state->handle, insn->operands[0].reg),
                     state->syntax == ASM_GAS ? "%" : "",
                     call16 ? "call16" : (got ? "got" : "lo"),
                     has_label ? insn->label : state->globals[label].name,
                     cs_reg_name(state->handle, insn->operands[1].reg));
            }
         } else if (insn->is_global_got_memop) {
            //fprintf(out, "%-5s %s #%s\n", insn->mnemonic, insn->op_str, insn->label);
            if (state->remove_pic) {
               fprintf(out, "lui   $%s, %%hi(%s)\n",
                     cs_reg_name(state->handle, insn->operands[0].reg),
                     insn->label);
            } else {
               fprintf(out, "%-5s  $%s, %%%s(%s)($gp)\n", insn->mnemonic,
                     cs_reg_name(state->handle, insn->operands[0].reg),
                     insn->linked_insn != -1 ? "call16" : "got",
                     insn->label);
            }
         } else if (insn->id == MIPS_INS_LW && insn->operands[0].reg == MIPS_REG_GP && state->remove_pic) {
            fprintf(out, "nop\n");
         } else if (insn->is_gp_prolog) {
            if (state->remove_pic) {
               fprintf(out, "nop\n");
            } else {
               if (insn->id == MIPS_INS_LUI) {
                  //fprintf(out, "lui   $gp, %%hi(_gp_disp)\n");
                  fprintf(out, ".cpload $t9\n");
               } else if (insn->id == MIPS_INS_ADDIU) {
                  //fprintf(out, "addiu $gp, $gp, %%lo(_gp_disp)\n");
                  fprintf(out, "\n");
               } else if (insn->id == MIPS_INS_ADDU) {
                  //fprintf(out, "addu  $gp, $gp, $t9\n");
                  fprintf(out, "\n");
               }
            }
         } else {
            fprintf(out, "%-5s %s\n", insn->mnemonic, insn->op_str);
         }
      }
      vaddr += 4;
      offset += 4;
      if (current_function != NULL && current_function->size != 0 && vaddr == current_function->vaddr + current_function->size) {
         fprintf(out, "    .type %s, @function\n", current_function->name);
         fprintf(out, "    .size %s, .-%s\n", current_function->name, current_function->name);
         fprintf(out, "    .end %s\n", current_function->name);
         current_function = NULL;
      }
   }
   if (current_function != NULL) {
      fprintf(out, "    .type %s, @function\n", current_function->name);
      fprintf(out, "    .size %s, .-%s\n", current_function->name, current_function->name);
      fprintf(out, "    .end %s\n", current_function->name);
   }
}

const char *disasm_get_version(void)
{
   static char version[32];
   int major, minor;
   (void)cs_version(&major, &minor);
   // TODO: manually keeping track of capstone revision number
   sprintf(version, "capstone %d.%d.4", major, minor);
   return version;
}

void print_asm_header(FILE *out, const char *output_file, asm_syntax syntax) {
   switch (syntax) {
      case ASM_GAS:
         fprintf(out, ".set noat      # allow manual use of $at\n");
         fprintf(out, ".set noreorder # don't insert nops after branches\n\n");
         break;
      case ASM_ARMIPS:
      {
         char output_binary[FILENAME_MAX];
         if (output_file == NULL) {
            strcpy(output_binary, "test.bin");
         } else {
            const char *base = basename(output_file);
            generate_filename(base, output_binary, "bin");
         }
         fprintf(out, ".n64\n");
         fprintf(out, ".create \"%s\", 0x%08X\n\n", output_binary, 0);
         break;
      }
      default:
         break;
   }
}

void print_asm_footer(FILE *out, asm_syntax syntax) {
   switch (syntax) {
      case ASM_ARMIPS:
         fprintf(out, "\n.close\n");
         break;
      default:
         break;
   }
}

#ifdef MIPSDISASM_STANDALONE

typedef struct
{
   unsigned int start;
   unsigned int length;
   unsigned int vaddr;
} range;

typedef struct
{
   range *ranges;
   int range_count;
   char *input_file;
   char *output_file;
   int merge_pseudo;
   int emit_glabel;
   int inspect_pic;
   int remove_pic;
   asm_syntax syntax;
} arg_config;

static arg_config default_args =
{
   NULL, // ranges
   0,    // range_count
   NULL, // input_file
   NULL, // output_file
   0,    // merge_pseudo
   0,    // emit_glabel
   0,    // inspect_pic
   0,    // remove_pic
   ASM_GAS, // GNU as
};

static void print_usage(void)
{
   ERROR("Usage: mipsdisasm [-g] [-o OUTPUT] [-p] [-s SYNTAX] [-v] ROM [RANGES]\n"
         "\n"
         "mipsdisasm v" MIPSDISASM_VERSION ": MIPS disassembler\n"
         "\n"
         "Optional arguments:\n"
         " -g           emit \"glabel name\" for global labels\n"
         " -o OUTPUT    output filename (default: stdout)\n"
         " -p           emit pseudoinstructions for related instructions\n"
         " -s SYNTAX    assembler syntax to use [gas, armips] (default: gas)\n"
         " -v           verbose progress output\n"
         "\n"
         "Arguments:\n"
         " FILE         input binary file to disassemble\n"
         " [RANGES]     optional list of ranges (default: entire input file)\n"
         "              format: <VAddr>[:<Start>-<End>] or <VAddr>[:<Start>+<Length>]\n"
         "              example: 0x80246000:0x1000-0x0E6258\n");
   exit(EXIT_FAILURE);
}

static void range_parse(range *r, const char *arg)
{
   char *colon = strchr(arg, ':');
   r->vaddr = strtoul(arg, NULL, 0);
   if (colon) {
      char *minus = strchr(colon+1, '-');
      char *plus = strchr(colon+1, '+');
      r->start = strtoul(colon+1, NULL, 0);
      if (minus) {
         r->length = strtoul(minus+1, NULL, 0) - r->start;
      } else if (plus) {
         r->length = strtoul(plus+1, NULL, 0);
      }
   } else {
      r->start = 0;
      r->length = 0;
   }
}

// parse command line arguments
static void parse_arguments(int argc, char *argv[], arg_config *config)
{
   int file_count = 0;
   if (argc < 2) {
      print_usage();
      exit(1);
   }
   config->ranges = malloc(argc * sizeof(*config->ranges));
   config->range_count = 0;
   for (int i = 1; i < argc; i++) {
      if (argv[i][0] == '-') {
         switch (argv[i][1]) {
            case 'g':
               config->emit_glabel = 1;
               break;
            case 'o':
               if (++i >= argc) {
                  print_usage();
               }
               config->output_file = argv[i];
               break;
            case 'p':
               config->merge_pseudo = 1;
               break;
            case 's':
            {
               if (++i >= argc) {
                  print_usage();
               }
               if ((0 == strcasecmp("gas", argv[i])) ||
                   (0 == strcasecmp("gnu", argv[i]))) {
                  config->syntax = ASM_GAS;
               } else if (0 == strcasecmp("armips", argv[i])) {
                  config->syntax = ASM_ARMIPS;
               } else {
                  print_usage();
               }
               break;
            }
            case 'v':
               g_verbosity = 1;
               break;
            default:
               print_usage();
               break;
         }
      } else {
         if (file_count == 0) {
            config->input_file = argv[i];
         } else {
            range_parse(&config->ranges[config->range_count], argv[i]);
            config->range_count++;
         }
         file_count++;
      }
   }
   if (file_count < 1) {
      print_usage();
   }
}

int main(int argc, char *argv[])
{
   arg_config args;
   long file_len;
   disasm_state *state;
   unsigned char *data;
   FILE *out;

   // load defaults and parse arguments
   out = stdout;
   args = default_args;
   parse_arguments(argc, argv, &args);

   // read input file
   INFO("Reading input file '%s'\n", args.input_file);
   file_len = read_file(args.input_file, &data);
   if (file_len <= 0) {
      ERROR("Error reading input file '%s'\n", args.input_file);
      return EXIT_FAILURE;
   }

   // if specified, open output file
   if (args.output_file != NULL) {
      INFO("Opening output file '%s'\n", args.output_file);
      out = fopen(args.output_file, "w");
      if (out == NULL) {
         ERROR("Error opening output file '%s'\n", args.output_file);
         return EXIT_FAILURE;
      }
   }

   state = disasm_state_init(args.syntax, args.merge_pseudo, args.emit_glabel, args.inspect_pic, args.remove_pic);

   // if no ranges specified or if only vaddr specified, add one of entire input file
   if (args.range_count < 1 || (args.range_count == 1 && args.ranges[0].length == 0)) {
      if (args.range_count < 1) {
         args.ranges[0].vaddr = 0;
      }
      args.ranges[0].start = 0;
      args.ranges[0].length = file_len;
      args.range_count = 1;
   }

   // run first pass disassembler on each section
   for (int i = 0; i < args.range_count; i++) {
      range *r = &args.ranges[i];
      INFO("Disassembling range 0x%X-0x%X at 0x%08X\n", r->start, r->start + r->length, r->vaddr);

      mipsdisasm_pass1(data, r->start, r->length, r->vaddr, state);
   }

   print_asm_header(out, args.output_file, args.syntax);

   // output global labels not in asm sections
   if (args.syntax == ASM_ARMIPS) {
      for (size_t i = 0; i < state->globals.size(); i++) {
         unsigned int vaddr = state->globals[i].vaddr;
         int global_in_asm = 0;
         for (size_t j = 0; j < state->blocks.size(); j++) {
            unsigned int block_vaddr = state->blocks[j].vaddr;
            if (vaddr >= block_vaddr && vaddr < block_vaddr + state->blocks[j].length) {
               global_in_asm = 1;
               break;
            }
         }
         if (!global_in_asm) {
            fprintf(out, ".definelabel %s, 0x%08X\n", state->globals[i].name, vaddr);
         }
      }
   }
   fprintf(out, "\n");

   // output each section
   for (int i = 0; i < args.range_count; i++) {
      range *r = &args.ranges[i];
      if (args.syntax == ASM_ARMIPS) {
         fprintf(out, ".headersize 0x%08X\n\n", r->vaddr);
      }

      // second pass, generate output
      mipsdisasm_pass2(out, state, r->start);
   }

   print_asm_footer(out, args.syntax);

   disasm_state_free(state);
   free(data);

   return EXIT_SUCCESS;
}

#endif // MIPSDISASM_STANDALONE
