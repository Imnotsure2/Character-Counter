CC = gcc
CFLAGS = -Wall -Wextra -Werror -std=c2x -pedantic
OBJS = main.o
BIN = main

all: $(BIN)

main: $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $@

main.o: main.c
	$(CC) $(CFLAGS) -c $<

clean:
	del $(OBJS) $(BIN).exe
