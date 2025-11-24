CFLAGS = -Wall -Wextra -pedantic

all: my_program

# Complete program build rule
my_program: main.o arith_utils.o
	gcc $(CFLAGS) main.o arith_utils.o -o my_program

main.o: main.c arith_utils.h
	gcc $(CFLAGS) -c main.c

arith_utils.o: arith_utils.c arith_utils.h
	gcc $(CFLAGS) -c arith_utils.c

run: all
	./my_program

clean:
	rm -f my_program *.o
