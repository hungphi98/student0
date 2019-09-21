CC=gcc
CFLAGS=-g -Wall
BINARIES=wc

all: default
default: $(BINARIES)

$(BINARIES): wc.o
	$(CC) $(CFLAGS) -o $(BINARIES) wc.o

wc.o:
	$(CC) $(CFLAGS) -c wc.c

clean:
	rm -f $(BINARIES) *.o *~
