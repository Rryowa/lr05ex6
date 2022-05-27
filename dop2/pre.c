#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int check(int a, int n);
int ten(int a, int n, int len);

int main(){
	printf("chislo: \n");
	int n;
	scanf("%d", &n);
	
	if (n > 0){
		printf(">0");
	}
	else{
		printf("<=0");
	}
	return 0;
}

