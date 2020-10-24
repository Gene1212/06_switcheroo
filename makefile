all: array.o
	gcc -o test array.o

array.o: array.c
	gcc -c array.c

run:
	./test