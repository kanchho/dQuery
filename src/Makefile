CC=gcc
CFLAGS=-Wall -Wextra -std=c99

OBJS=dns.o

all: dquery

dquery: $(OBJS)
	gcc -o $@ $^

dns.o: dns.c

clean:
	rm -f $(OBJS)
	rm -f dquery

