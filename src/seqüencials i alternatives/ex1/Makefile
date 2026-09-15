# How it works:
# 
# $(wildcard *.c) finds all .c files in the current directory.
# $(SRC:.c=.o) converts them into .o filenames.
# When you add a new .c file, you don't need to modify the Makefile.
#

CC = gcc
CFLAGS = -std=c17 -Wall -Wextra -pedantic

SRC := $(wildcard *.c)
OBJ := $(SRC:.c=.o)

programa: $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $@

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) programa
