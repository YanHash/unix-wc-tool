
CC=gcc
CFLAGS=-Wall -Wextra -std=c11

SRCDIR=src


EXEC=ccwc

all: $(EXEC)

$(EXEC): $(SRCDIR)/ccwc.c
	$(CC) $(CFLAGS) $< -o $@

run: $(EXEC)
	./$(EXEC)

clean:
	rm -f $(EXEC)
