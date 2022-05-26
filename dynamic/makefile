all:
	gcc -shared -o libtest.so -fPIC main.c test.c test.h
	gcc main.c -L. -ltest -o dynamic_lib -Wl,-rpath,.
