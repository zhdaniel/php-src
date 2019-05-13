CC=gcc
CFLAGS=-g

all: main

main: calc.yy.o calc.o main.o
	$(CC) $(CFLAGS) main.o calc.o calc.yy.o -o main

main.o: main.c
	$(CC) $(CFLAGS) -c main.c -o main.o

calc.o: calc.c
	$(CC) $(CFLAGS) -c calc.c -o calc.o

calc.yy.o: calc.yy.c
	$(CC) $(CFLAGS) -c calc.yy.c -o calc.yy.o

calc.c: calc.y
	bison -d -y calc.y -o calc.c

calc.yy.c: calc.l
	lex -o calc.yy.c calc.l

.PHONY: clean
clean:
	@/bin/rm -f main *.o calc.c
