#include <stdio.h>
#include <stdlib.h>

/* Leia um vetor A com N elementos e escreva um vetor B com N elementos, 
conforme a seguinte condição: se índice de A[índice] é par então B[índice] = 0,
caso contrário B[índice] = 1. */

int main()
{
	// Variáveis 
	int n = 10;
	int a[n], b[n];
	int i = 0;
	
	// Entrada de valores
	for(i = 0; i < n; i++) {
		printf("Informe o elemento %d de A: ", (i + 1));
		scanf("%d", &a[i]);
	}
	
	// Processamento
	for(i = 0; i < n; i++) {
		if(a[i] % 2 == 0) {
			b[i] = 0;
		}else {
			b[i] = 1;
		}
	}
	
	// Saída de questão para finalizar o programa
	printf("\nVetor A:[%d] || Vetor B:[%d] ", a[i], b[i]);
	
	return("PAUSE");
}
	
	
