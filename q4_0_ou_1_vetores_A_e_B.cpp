#include <stdio.h>
#include <stdlib.h>

/* Leia um vetor A com N elementos e escreva um vetor B com N elementos, 
conforme a seguinte condi��o: se �ndice de A[�ndice] � par ent�o B[�ndice] = 0,
caso contr�rio B[�ndice] = 1. */

int main()
{
	// Vari�veis 
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
	
	// Sa�da de quest�o para finalizar o programa
	printf("\nVetor A:[%d] || Vetor B:[%d] ", a[i], b[i]);
	
	return("PAUSE");
}
	
	
