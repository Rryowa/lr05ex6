#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "test.h"
#include <stdbool.h>

int main(){
	printf("chislo: \n");
	int a;
	scanf("%d", &a);
	if (check(a)){
		printf(">0");
	}
	else{
		printf("<=0");
	}
	return 0;
}

