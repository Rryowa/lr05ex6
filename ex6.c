#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include "func.h"


int main(){
	printf("chislo: \n");
	char a[11];
	fgets(a, 11, stdin);
	fflush(stdin);	
	printf("systema ischislenia: \n");
	int n;
	scanf("%d", &n);
	
	int b = atoi(a);
	int len = strlen(a)-1;
	
	if (check(b, n)){
		printf("Vse pravilno\n");
		printf("%d\n", ten(b, n, len));
	}
	else{
		printf("Nepravilnaya systema\n");
	}
	return 0;
}

