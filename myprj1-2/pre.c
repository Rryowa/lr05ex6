#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int check(int a, int n);
int ten(int a, int n, int len);

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

int check(int a, int n){
	while (a > 0){
		if (n == 10){
			return 1;
		}
		if (a % 10 >= n){
			return 0;
		}
		a = a/10;
		if (a <= 0){
			return 1;
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
