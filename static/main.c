#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include "test.h"

int main(){
	printf("chislo: \n");
	int a;
	scanf("%d", &a);

	if (check(a)){
		printf(">0\n");
	}
	else{
		printf("<=0\n");
	}
	return 0;
}

