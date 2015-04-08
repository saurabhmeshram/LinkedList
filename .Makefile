CC: gcc
CFLAGS: -Wall -Werror -g 

TARGET: exe

# Compilation Step \
1. gcc -c  src/*.c -I include  \
2. gcc -o exe obj/*.o -I include 

SRC: 	main.c   \
	insert.c \
	delete.c \
	misc.c 	
OBJ: $(SRC:c=o)

$(TARGET):$(OBJ)
	$(CC)
		 
