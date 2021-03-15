#include<stdio.h>

#include "Soma.h"

int main(){
	
	int a, b, result;

	printf("Digite os valores:\n");
	scanf("%d%d", &a, &b);

	printf("O resultado eh: %d", soma(a,b));

	return 0;
}
