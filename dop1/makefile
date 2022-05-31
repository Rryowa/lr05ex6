mypr3: ex6.o func.o
	gcc -o mypr3 ex6.o func.o -lm
ex6.o: ex6.c
	gcc -c ex6.c
func.o: func.c func.h
	gcc -c func.c func.h
clean:
	rm *.o
