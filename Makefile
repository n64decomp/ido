default: all

SRC_DIRS := . src src/libmld src/libp src/libu src/libxmalloc
UOPT_DIR := src/uopt
UGEN_DIR := src/ugen

AVOID_UB ?= 1

CC := mips-linux-gnu-gcc
OPTIMIZATION := -ggdb3
ARCH_FLAGS := -mips2 -mfp32
CFLAGS := -fPIC -I src $(ARCH_FLAGS) $(OPTIMIZATION)
LDFLAGS := -fPIC $(ARCH_FLAGS) $(OPTIMIZATION)

ifeq ($(AVOID_UB),1)
    CFLAGS := $(CFLAGS) -DAVOID_UB
endif

BUILD_DIR := build
ALL_DIRS := $(addprefix $(BUILD_DIR)/,$(SRC_DIRS) $(UOPT_DIR) $(UGEN_DIR))

C_FILES := $(foreach dir,$(SRC_DIRS),$(wildcard $(dir)/*.c))
UOPT_C_FILES := $(C_FILES) $(foreach dir,$(UOPT_DIR),$(wildcard $(dir)/*.c))
UGEN_C_FILES := $(C_FILES) $(foreach dir,$(UGEN_DIR),$(wildcard $(dir)/*.c))
UOPT_O_FILES := $(addprefix $(BUILD_DIR)/,$(UOPT_C_FILES:.c=.o))
UGEN_O_FILES := $(addprefix $(BUILD_DIR)/,$(UGEN_C_FILES:.c=.o))
DEP_FILES := $(O_FILES:.o=.d)

# Ensure build directories exist before compiling anything
DUMMY != mkdir -p $(ALL_DIRS)

TARGETS := $(BUILD_DIR)/uopt $(BUILD_DIR)/ugen

all: $(TARGETS)

$(BUILD_DIR)/uopt: $(UOPT_O_FILES)
	$(CC) -o $@ $^ $(LDFLAGS)

$(BUILD_DIR)/ugen: $(UGEN_O_FILES)
	$(CC) -o $@ $^ $(LDFLAGS)

$(BUILD_DIR)/%.o: %.c
	$(CC) -MMD -c $(CFLAGS) -o $@ $<

clean:
	$(RM) -r $(BUILD_DIR)

.PHONY: all clean default

-include $(DEP_FILES)
