all:
	gcc -c main.c test.c test.h
	ar r libtest.a test.o
	gcc -o static_lib main.o -L. -ltest
