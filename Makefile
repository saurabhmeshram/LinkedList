C_FLAGS := -g -Wall -Wextra
CC := gcc
RM := rm
LINKFLAGS := -lanylibrary

.PHONY: $(TARGET)
.PHONY: clean

VPATH:= ./src/ ./obj/ ./include/

# Path for .c , .h and .o Files 
SRC_PATH := ./src/
OBJ_PATH := ./obj/
INC_PATH := -I ./include

# Executable Name 
TARGET := exe

# Files to compile
OBJ1 := main.o \
        delete.o \
	insert.o \
	misc.o \
	print_reverse.o \
	reverse_list.o \
	swap_alternate.o \
	reverse_n_list.o \
	view_list.o


OBJ := $(patsubst %,$(OBJ_PATH)%,$(OBJ1))

# Build .o first
$(OBJ_PATH)%.o: $(SRC_PATH)%.c
		@echo [CC] $<
		@$(CC) $(C_FLAGS) -o $@ -c $< $(INC_PATH)                  

# Build final Binary
$(TARGET):      $(OBJ)
		@echo -e "\n[INFO] Creating Binary Executable [$(TARGET)]"
		@$(CC) -o $@ $^ 

# Clean all the object files and the binary
clean:
		@echo "[Cleaning]"
		@$(RM) -rfv $(OBJ_PATH)*
		@$(RM) -rfv $(TARGET)
