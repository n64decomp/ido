#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include <string>
#include <sstream>
#include <vector>
#include <fstream>
#include <sys/stat.h>
#include <sys/types.h>
#include <errno.h>
#include "mipsdisasm.h"
#include "utils.h"
#include "elf.h"

using namespace std;

#define ELFDUMP_VERSION "0.1"

#define u32be(x) (uint32_t)(((x & 0xff) << 24) + ((x & 0xff00) << 8) + ((x & 0xff0000) >> 8) + ((uint32_t)(x) >> 24))
#define u16be(x) (uint16_t)(((x & 0xff) << 8) + ((x & 0xff00) >> 8))

typedef struct
{
   unsigned int start;
   unsigned int length;
   unsigned int vaddr;
   unsigned int common_start;
   vector<string> common_order;
} range;

typedef struct
{
   string filename;
   unsigned int text_start, text_end;
   unsigned int rodata_start, rodata_end;
   unsigned int data_start, data_end;
   unsigned int bss_start, bss_end;
   string common_start, common_end;
} split_item;

typedef struct
{
   int has_vaddr;
   unsigned int vaddr;
   char *input_file;
   char *output_file;
   char *split_file;
   int merge_pseudo;
   int emit_glabel;
   int inspect_pic;
   int remove_pic;
   asm_syntax syntax;
} arg_config;

static arg_config default_args =
{
   0,    // has_vaddr
   0x0,  // vaddr
   NULL, // input_file
   NULL, // output_file
   NULL, // split_file
   0,    // merge_pseudo
   1,    // emit_glabel
   0,    // inspect_pic
   0,    // remove_pic
   ASM_GAS, // GNU as
};

static void print_usage(void)
{
   ERROR("Usage: elfdump [-g] [-o OUTPUT] [-p] [-s SYNTAX] [-v] OBJFILE [VADDR]\n"
         "\n"
         "elfdump v" ELFDUMP_VERSION ": MIPS ELF object file disassembler\n"
         "\n"
         "Optional arguments:\n"
         " -g           emit \"glabel name\" for global labels\n"
         " -o OUTPUT    output filename (default: stdout)\n"
         " -p           emit pseudoinstructions for related instructions\n"
         "              (not useful for objfiles, but possibly ELF binaries)\n"
         " -i           inspect PIC\n"
         " -r           remove PIC\n"
         " -t           split specification file\n"
         " -s SYNTAX    assembler syntax to use [gas, armips] (default: gas)\n"
         " -v           verbose progress output\n"
         "\n"
         "Arguments:\n"
         " OBJFILE      ELF object file to disassemble .text section for\n"
         " [VADDR]      virtual address of the first instruction\n");
   exit(EXIT_FAILURE);
}

// parse command line arguments
static void parse_arguments(int argc, char *argv[], arg_config *config)
{
   int has_file = 0;
   if (argc < 2) {
      print_usage();
      exit(1);
   }
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
            case 'i':
               config->inspect_pic = 1;
               break;
            case 'r':
               config->remove_pic = 1;
               break;
            case 't':
               if (++i >= argc) {
                  print_usage();
               }
               config->split_file = argv[i];
               break;
            case 'v':
               g_verbosity = 1;
               break;
            default:
               print_usage();
               break;
         }
      } else {
         if (!has_file) {
            config->input_file = argv[i];
            has_file = 1;
         } else if (!config->has_vaddr) {
            config->vaddr = strtoul(argv[i], NULL, 0);
            config->has_vaddr = 1;
         } else {
            print_usage();
         }
      }
   }
   if (!has_file) {
      print_usage();
   }
}

static vector<split_item> parse_split_table(ifstream& f) {
   vector<split_item> ret;

   string line;
   while (getline(f, line)) {
      if (line.size() == 0) {
         continue;
      }
      if (line == "[/split]") {
         break;
      }
      if (line[0] != '/') {
         continue;
      }
      string filename = line;
      if (!getline(f, line)) {
         ERROR("Missing section addresses after filename in split table file.\n");
         exit(EXIT_FAILURE);
      }
      string text, rodata, data, bss, common;
      istringstream(line) >> text >> rodata >> data >> bss >> common;

      split_item item;
      item.filename = filename.substr(1);
      if (sscanf(text.c_str(), "%X-%X", &item.text_start, &item.text_end) != 2) {
         item.text_start = 0;
         item.text_end = 0;
      }
      if (sscanf(rodata.c_str(), "%X-%X", &item.rodata_start, &item.rodata_end) != 2) {
         item.rodata_start = 0;
         item.rodata_end = 0;
      }
      if (sscanf(data.c_str(), "%X-%X", &item.data_start, &item.data_end) != 2) {
         item.data_start = 0;
         item.data_end = 0;
      }
      if (sscanf(bss.c_str(), "%X-%X", &item.bss_start, &item.bss_end) != 2) {
         item.bss_start = 0;
         item.bss_end = 0;
      }
      if (common.size() >= 3 && common.find_first_of('-') != string::npos) {
         size_t p = common.find_first_of('-');
         item.common_start = common.substr(0, p);
         item.common_end = common.substr(p + 1);
      }
      ret.push_back(item);
   }
   return ret;
}

static vector<string> parse_common_order(istream& f) {
   vector<string> ret;

   string line;
   while (getline(f, line)) {
      if (line == "[/common-order]") {
         break;
      }
      if (!line.empty()) {
         ret.push_back(line);
      }
   }

   return ret;
}

typedef struct {
   vector<split_item> split_items;
   vector<string> common_order;
} parse_split_file_result;
static parse_split_file_result parse_split_file(const char *filename) {
   ifstream f(filename);
   if (!f.is_open()) {
      ERROR("Could not open split file.\n");
      exit(EXIT_FAILURE);
   }

   parse_split_file_result res;

   string line;
   while (getline(f, line)) {
      if (line == "[split]") {
         res.split_items = parse_split_table(f);
      } else if (line == "[common-order]") {
         res.common_order = parse_common_order(f);
      }
   }

   return res;
}

static void add_reloc(disasm_state *state, unsigned int offset, const char *name, int addend, unsigned int vaddr)
{
   char label_name[256];
   if (!strcmp(name, ".text")) {
      vaddr += addend;
      addend = 0;
      if (!disasm_label_lookup(state, vaddr, label_name)) {
         sprintf(label_name, "static_%08X", vaddr);
         disasm_label_add(state, label_name, vaddr, 0, false);
      }
      name = label_name;
   }

   disasm_reloc_add(state, offset, name, addend);
}

static range parse_elf(disasm_state *state, unsigned char *data, long file_len, arg_config *args)
{
   Elf32_Ehdr *ehdr;
   Elf32_Shdr *shdr, *str_shdr, *sym_shdr = NULL, *dynsym_shdr, *dynamic_shdr, *reginfo_shdr, *got_shdr, *sym_strtab, *sym_dynstr;
   int text_section_index = -1;
   int symtab_section_index = -1;
   int dynsym_section_index = -1;
   int reginfo_section_index = -1;
   int dynamic_section_index = -1;
   int got_section_index = -1;
   int rodata_section_index = -1;
   int data_section_index = -1;
   int bss_section_index = -1;
   uint32_t text_offset = 0;
   uint32_t vaddr_adj = 0;
   range out_range;

   if (file_len < 4 || data[0] != 0x7f || data[1] != 'E' || data[2] != 'L' || data[3] != 'F') {
      ERROR("Not an ELF file.\n");
      exit(EXIT_FAILURE);
   }

   ehdr = (Elf32_Ehdr *) data;
   if (ehdr->e_ident[EI_DATA] != 2 || u16be(ehdr->e_machine) != 8) {
      ERROR("Not big-endian MIPS.\n");
      exit(EXIT_FAILURE);
   }

   if (u16be(ehdr->e_shstrndx) == 0) {
      // (We could look at program headers instead in this case.)
      ERROR("Missing section headers; stripped binaries are not yet supported.\n");
      exit(EXIT_FAILURE);
   }

   if (args->has_vaddr) {
      out_range.vaddr = args->vaddr;
   }

#define SECTION(index) (Elf32_Shdr *)(data + u32be(ehdr->e_shoff) + (index) * u16be(ehdr->e_shentsize))
#define STR(strtab, offset) (const char *)(data + u32be(strtab->sh_offset) + offset)

   str_shdr = SECTION(u16be(ehdr->e_shstrndx));
   for (int i = 0; i < u16be(ehdr->e_shnum); i++) {
      shdr = SECTION(i);
      const char *name = STR(str_shdr, u32be(shdr->sh_name));
      if (strcmp(name, ".text") == 0) {
         text_offset = u32be(shdr->sh_offset);
         if (!args->has_vaddr) {
            out_range.vaddr = u32be(shdr->sh_addr);
            vaddr_adj = out_range.vaddr - u32be(shdr->sh_addr);
         }
         out_range.length = u32be(shdr->sh_size);
         out_range.start = text_offset;
         text_section_index = i;
      }
      if (u32be(shdr->sh_type) == SHT_SYMTAB) {
         symtab_section_index = i;
      }
      if (u32be(shdr->sh_type) == SHT_DYNSYM) {
         dynsym_section_index = i;
      }
      if (u32be(shdr->sh_type) == SHT_MIPS_REGINFO) {
         reginfo_section_index = i;
      }
      if (u32be(shdr->sh_type) == SHT_DYNAMIC) {
         dynamic_section_index = i;
      }
      if (strcmp(name, ".got") == 0) {
         got_section_index = i;
      }
      if (strcmp(name, ".rodata") == 0) {
         rodata_section_index = i;
      }
      if (strcmp(name, ".data") == 0) {
         data_section_index = i;
      }
      if (strcmp(name, ".bss") == 0) {
         bss_section_index = i;
      }
   }

   if (text_section_index == -1) {
      ERROR("Missing .text section.\n");
      exit(EXIT_FAILURE);
   }

   if (symtab_section_index == -1 && dynsym_section_index == -1) {
      ERROR("Missing .symtab or .dynsym section.\n");
      exit(EXIT_FAILURE);
   }

   if (dynsym_section_index != -1) {
      if (reginfo_section_index == -1) {
         ERROR("Missing .reginfo section.\n");
         exit(EXIT_FAILURE);
      }
      if (dynamic_section_index == -1) {
         ERROR("Missing .dynamic section.\n");
         exit(EXIT_FAILURE);
      }
      if (got_section_index == -1) {
         ERROR("Missing .got section.\n");
         exit(EXIT_FAILURE);
      }
   }

   if (rodata_section_index != -1) {
      shdr = SECTION(rodata_section_index);
      unsigned int size = u32be(shdr->sh_size);
      uint8_t *rodata = (uint8_t *)malloc(size);
      memcpy(rodata, data + u32be(shdr->sh_offset), size);
      disasm_rodata_set(state, rodata, u32be(shdr->sh_addr), size);
   }

   if (data_section_index != -1) {
      shdr = SECTION(data_section_index);
      unsigned int size = u32be(shdr->sh_size);
      uint8_t *buf = (uint8_t *)malloc(size);
      memcpy(buf, data + u32be(shdr->sh_offset), size);
      disasm_data_set(state, buf, u32be(shdr->sh_addr), size);
   }

   if (bss_section_index != -1) {
      shdr = SECTION(bss_section_index);
      unsigned int size = u32be(shdr->sh_size);
      uint8_t *bss = (uint8_t *)malloc(size);
      memcpy(bss, data + u32be(shdr->sh_offset), size);
      disasm_bss_set(state, bss, u32be(shdr->sh_addr), size);
   }


   // add symbols
   if (symtab_section_index != -1) {
      sym_shdr = SECTION(symtab_section_index);
      sym_strtab = SECTION(u32be(sym_shdr->sh_link));

      assert(u32be(sym_shdr->sh_entsize) == sizeof(Elf32_Sym));
      for (unsigned int i = 0; i < u32be(sym_shdr->sh_size); i += sizeof(Elf32_Sym)) {
         Elf32_Sym *sym = (Elf32_Sym *)(data + u32be(sym_shdr->sh_offset) + i);
         const char *name = STR(sym_strtab, u32be(sym->st_name));
         uint32_t addr = u32be(sym->st_value);
         if (u16be(sym->st_shndx) != text_section_index || name[0] == '.') {
            continue;
         }
         addr += vaddr_adj;
         disasm_label_add(state, name, addr, u32be(sym->st_size), true);
      }
   }

   if (dynsym_section_index != -1) {
      dynsym_shdr = SECTION(dynsym_section_index);
      sym_dynstr = SECTION(u32be(dynsym_shdr->sh_link));
      reginfo_shdr = SECTION(reginfo_section_index);
      dynamic_shdr = SECTION(dynamic_section_index);
      got_shdr = SECTION(got_section_index);

      Elf32_RegInfo *reg_info = (Elf32_RegInfo *)(data + u32be(reginfo_shdr->sh_offset));
      uint32_t gp_base = u32be(reg_info->ri_gp_value); // gp should have this value through the program run
      uint32_t got_start = 0;
      uint32_t local_got_no = 0;
      uint32_t first_got_sym = 0;
      uint32_t dynsym_no = 0; // section size can't be used due to alignment 16 padding

      assert(u32be(dynamic_shdr->sh_entsize) == sizeof(Elf32_Dyn));
      for (unsigned int i = 0; i < u32be(dynamic_shdr->sh_size); i += sizeof(Elf32_Dyn)) {
         Elf32_Dyn *dyn = (Elf32_Dyn *)(data + u32be(dynamic_shdr->sh_offset) + i);
         if (u32be(dyn->d_tag) == DT_PLTGOT) {
            got_start = u32be(dyn->d_un.d_ptr);
         }
         if (u32be(dyn->d_tag) == DT_MIPS_LOCAL_GOTNO) {
            local_got_no = u32be(dyn->d_un.d_val);
         }
         if (u32be(dyn->d_tag) == DT_MIPS_GOTSYM) {
            first_got_sym = u32be(dyn->d_un.d_val);
         }
         if (u32be(dyn->d_tag) == DT_MIPS_SYMTABNO) {
            dynsym_no = u32be(dyn->d_un.d_val);
         }
      }

      assert(got_start != 0);

      // value to add to asm gp offset, for example 32752, if -32752(gp) refers to the first entry in got.
      uint32_t gp_adj = gp_base - got_start;
      assert(gp_adj < 0x10000);

      assert(u32be(dynsym_shdr->sh_entsize) == sizeof(Elf32_Sym));
      uint32_t global_got_no = dynsym_no - first_got_sym;
      global_got_entry *global_entries = (global_got_entry *)calloc(global_got_no, sizeof(global_got_entry));

      unsigned int common_start = ~0U;
      vector<string> common_order;

      for (unsigned int i = 0; i < dynsym_no; i++) {
         Elf32_Sym *sym = (Elf32_Sym *)(data + u32be(dynsym_shdr->sh_offset) + i * sizeof(Elf32_Sym));
         const char *name = STR(sym_dynstr, u32be(sym->st_name));
         uint32_t addr = u32be(sym->st_value);
         addr += vaddr_adj;
         uint8_t type = ELF32_ST_TYPE(sym->st_info);
         if ((u16be(sym->st_shndx) == SHN_MIPS_TEXT && type == STT_FUNC) ||
             (type == STT_OBJECT && (u16be(sym->st_shndx) == SHN_MIPS_ACOMMON || u16be(sym->st_shndx) == SHN_MIPS_DATA)))
         {
            disasm_label_add(state, name, addr, u32be(sym->st_size), true);
            if (type == STT_OBJECT) {
               disasm_add_data_addr(state, addr);
            }
            if (u16be(sym->st_shndx) == SHN_MIPS_ACOMMON) {
               if (addr < common_start) {
                  common_start = addr;
               }
               common_order.push_back(name);
            }
         }
         if (i >= first_got_sym) {
            strcpy(global_entries[i - first_got_sym].name, name);
            global_entries[i - first_got_sym].vaddr = addr;
         }
      }

      uint32_t *local_entries = (uint32_t *)calloc(local_got_no, sizeof(uint32_t));
      for (uint32_t i = 0; i < local_got_no; i++) {
         uint32_t *entry = (uint32_t *)(data + u32be(got_shdr->sh_offset) + i * sizeof(uint32_t));
         local_entries[i] = u32be(*entry);
      }

      disasm_got_entries_set(state, gp_base, gp_adj, local_entries, local_got_no, global_entries, global_got_no);

      out_range.common_start = common_start;
      out_range.common_order.swap(common_order);
   }

   // add relocations
   for (int i = 0; i < u16be(ehdr->e_shnum); i++) {
      Elf32_Rel *prevHi = NULL;
      shdr = SECTION(i);
      if (u32be(shdr->sh_type) != SHT_REL || u32be(shdr->sh_info) != (unsigned int) text_section_index)
         continue;

      if (sym_shdr == NULL) {
         ERROR("Relocations without .symtab section\n");
         exit(EXIT_FAILURE);
      }

      assert(u32be(shdr->sh_link) == (unsigned int) symtab_section_index);
      assert(u32be(shdr->sh_entsize) == sizeof(Elf32_Rel));
      for (unsigned int i = 0; i < u32be(shdr->sh_size); i += sizeof(Elf32_Rel)) {
         Elf32_Rel *rel = (Elf32_Rel *)(data + u32be(shdr->sh_offset) + i);
         uint32_t offset = text_offset + u32be(rel->r_offset);
         uint32_t symIndex = ELF32_R_SYM(u32be(rel->r_info));
         uint32_t rtype = ELF32_R_TYPE(u32be(rel->r_info));
         const char *symName = "0";
         if (symIndex != STN_UNDEF) {
            Elf32_Sym *sym = (Elf32_Sym *)(data + u32be(sym_shdr->sh_offset) + symIndex * sizeof(Elf32_Sym));
            symName = STR(sym_strtab, u32be(sym->st_name));
         }

         if (rtype == R_MIPS_HI16) {
            if (prevHi != NULL) {
               ERROR("Consecutive R_MIPS_HI16.\n");
               exit(EXIT_FAILURE);
            }
            prevHi = rel;
            continue;
         }
         if (rtype == R_MIPS_LO16) {
            int32_t addend = (int16_t)((data[offset + 2] << 8) + data[offset + 3]);
            if (prevHi != NULL) {
               uint32_t offset2 = text_offset + u32be(prevHi->r_offset);
               addend += (uint32_t)((data[offset2 + 2] << 8) + data[offset2 + 3]) << 16;
               add_reloc(state, offset2, symName, addend, out_range.vaddr);
            }
            prevHi = NULL;
            add_reloc(state, offset, symName, addend, out_range.vaddr);
         }
         else if (rtype == R_MIPS_26) {
            int32_t addend = (u32be(*(uint32_t*)(data + offset)) & ((1 << 26) - 1)) << 2;
            if (addend >= (1 << 27)) {
               addend -= 1 << 28;
            }
            add_reloc(state, offset, symName, addend, out_range.vaddr);
         }
         else {
            ERROR("Bad relocation type %d.\n", rtype);
            exit(EXIT_FAILURE);
         }
      }
      if (prevHi != NULL) {
         ERROR("R_MIPS_HI16 without matching R_MIPS_LO16.\n");
         exit(EXIT_FAILURE);
      }
   }

   return out_range;
}
#undef SECTION
#undef STR

static void rek_mkdir(string& path) {
   char *sep = strrchr(&path[0], '/');
   if (sep != NULL) {
      *sep = 0;
      rek_mkdir(path);
      *sep = '/';
   }
   if (mkdir(path.c_str(), 0775) && errno != EEXIST) {
      printf("error while trying to create '%s'\n%m\n", path.c_str());
   }
}

static FILE *fopen_mkdir(const string& path, const char *mode) {
   const char *sep = strrchr(path.c_str(), '/');
   if (sep) {
      string path0 = path;
      path0[sep - path.c_str()] = 0;
      rek_mkdir(path0);
   }
   return fopen(path.c_str(), mode);
}

int main(int argc, char *argv[])
{
   arg_config args;
   long file_len;
   disasm_state *state;
   unsigned char *data;
   FILE *out;
   range r;

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

   r = parse_elf(state, data, file_len, &args);

   // run first pass disassembler
   INFO("Disassembling range 0x%X-0x%X at 0x%08X\n", r.start, r.start + r.length, r.vaddr);
   mipsdisasm_pass1(data, r.start, r.length, r.vaddr, state);

   parse_split_file_result split;
   if (args.split_file != NULL) {
      split = parse_split_file(args.split_file);
   } else {
      split_item item = {"", r.vaddr, r.vaddr + r.length, 0, ~0U, 0, ~0U, 0, ~0U, "", ""};
      split.split_items.push_back(item);
   }

   for (auto& item : split.split_items) {
      FILE *item_out = item.filename.empty() ? out : fopen_mkdir(item.filename, "w");

      fprintf(item_out, "%s",
         "__asm__(R\"\"(\n"
         ".macro glabel label\n"
         "    .global \\label\n"
         "    .balign 4\n"
         "    \\label:\n"
         ".endm\n"
         "\n");

      // print jtbls etc.
      disasm_print_rodata(item_out, state, item.rodata_start, item.rodata_end);
      disasm_print_data(item_out, state, item.data_start, item.data_end);
      disasm_print_bss(item_out, state, item.bss_start, item.bss_end, NULL);
      if (item_out != out) {
         set<string> filter;
         bool in_range = false;
         for (auto& name : (split.common_order.empty() ? r.common_order : split.common_order)) {
            if (name == item.common_start) {
               in_range = true;
            }
            if (in_range) {
               filter.insert(name);
            }
            if (name == item.common_end) {
               in_range = false;
            }
         }
         disasm_print_bss(item_out, state, r.common_start, ~0U, &filter);
      }

      // second pass, generate output
      print_asm_header(item_out, args.output_file, args.syntax);
      if (args.syntax == ASM_ARMIPS) {
         fprintf(item_out, ".headersize 0x%08X\n\n", r.vaddr);
      }
      mipsdisasm_pass2(item_out, state, r.start, item.text_start, item.text_end);
      print_asm_footer(item_out, args.syntax);

      fprintf(item_out, "%s", ")\"\");\n");
      if (item_out != out) {
         fclose(item_out);
      }
   }

   disasm_state_free(state);
   free(data);
   return EXIT_SUCCESS;
}
