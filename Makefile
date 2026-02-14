CC = gcc
CFLAGS = -g -fdiagnostics-color=always -Iinclude
LDFLAGS =
LIBS ?= -lm

SRCS = $(wildcard *.c)
OBJS = $(SRCS:.c=.o)
BIN = main

.PHONY: all clean

all: $(BIN)

$(BIN): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^ $(LDFLAGS) $(LIBS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(BIN)
