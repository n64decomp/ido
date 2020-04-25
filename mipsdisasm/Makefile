################ Target Executable and Sources ###############

ELFDUMP_TARGET  := elfdump

ELFDUMP_SRC_FILES := mipsdisasm.cpp \
                     utils.c      \
                     elfdump.cpp

ELFDUMP_OBJ_FILES := mipsdisasm.o \
                     utils.o \
                     elfdump.o

OBJ_DIR     = ./obj

##################### Compiler Options #######################

WIN64_CROSS = x86_64-w64-mingw32-
WIN32_CROSS = i686-w64-mingw32-
#CROSS     = $(WIN32_CROSS)
CC        = $(CROSS)gcc
CXX       = $(CROSS)g++
LD        = $(CC)
AR        = $(CROSS)ar

INCLUDES  =
DEFS      =
# Release flags
#CFLAGS    = -Wall -Wextra -Wno-format-overflow -O2 -ffunction-sections -fdata-sections $(INCLUDES) $(DEFS) -MMD
#LDFLAGS   = -s -Wl,--gc-sections
# Debug flags
CFLAGS    = -Wall -Wextra -O0 -g $(INCLUDES) $(DEFS) -MMD
LDFLAGS   =
LIBS      =

OBJ_FILES = $(ELFDUMP_OBJ_FILES)
DEP_FILES = $(OBJ_FILES:.o=.d)

######################## Targets #############################

default: all

all: $(ELFDUMP_TARGET)

$(OBJ_DIR)/%.o: %.cpp
	@[ -d $(OBJ_DIR) ] || mkdir -p $(OBJ_DIR)
	$(CXX) $(CFLAGS) -o $@ -c $<

$(OBJ_DIR)/%.o: %.c
	@[ -d $(OBJ_DIR) ] || mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -o $@ -c $<

$(ELFDUMP_TARGET): $(ELFDUMP_SRC_FILES)
	$(CXX) $(CFLAGS) $^ $(LDFLAGS) -o $@ -lcapstone

clean:
	rm -f $(OBJ_FILES) $(DEP_FILES)
	rm -f $(ELFDUMP_TARGET) $(ELFDUMP_TARGET).exe
	-@[ -d $(OBJ_DIR) ] && rmdir --ignore-fail-on-non-empty $(OBJ_DIR)

.PHONY: all clean default

#################### Dependency Files ########################

-include $(DEP_FILES)
