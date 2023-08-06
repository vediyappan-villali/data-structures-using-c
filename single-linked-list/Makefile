# Makefile for single linked list

CC = gcc
CFLAGS = -Wall -Werror
TARGET = sll

SRC = main.c create_list.c display.c delete.c reverse.c search.c count.c

all: $(TARGET)

$(TARGET) : $(SRC)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRC)

clean:
	rm -rf $(TARGET)
