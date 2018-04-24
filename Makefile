# test for gdb


CC = gcc
CFLAGS = -O1 -Wall -m32
LIBS = -lm

all:
	$(CC) $(CFLAGS) $(LIBS) -o gdb_test gdb_test.c

clean:
	rm -rf  *.o  a.out  a.out.dSYM gdb_test *~
