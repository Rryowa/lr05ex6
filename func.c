#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include "func.h"

int check(int a, int n){
	while (a > 0){
		if (a % 10 >= n){
			return 1;
		}
		a = a/10;
		if (a <= 0){
			return 0;
		}
	}
}

int ten(int a, int n, int len){
	int z = 0;
	for (int i = 0; i < len; i++){
		z = z + (a % 10) * pow(n, i);
		a = a / 10;
	}
	return z;
}

