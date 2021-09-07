#include <stdio.h>
#include <stdlib.h>

/* Leia dois vetores A e B com N elementos, escreva um vetor C, sendo este
a junção dos vetores A e B. Desta forma, o vetor C deverá ter 2 * N elementos.
*/

int main()
{
	// Variáveis
	int n = 5;
	int a[5], b[5], c[n * 2], i, j;
	n = 5;
	i = 0;
	j = 0;
	
	// Entrada
	for(i = 0; i < n; i++) {
		printf("Informe o elemento %d de A: ", (i + 1));
		scanf("%d", &a[i]);
	}
	for(i = 0; i < n; i++) {
		printf("Informe o elemento %d de B: ", (i + 1));
		scanf("%d", &b[i]);
	}
	// Processamento de questão
	for(i = 0; i < n; i++) {
		c[j] = a[i];
		j = j + 1;
	}
	for(i = 0; i < n; i++) {
		c[j] = b[i];
		j = j + 1;	
	}
	// Saída
	printf("\n");
	for(i = 0; i < n; i++) {
		printf("\nA[%d] = %d || B[%d] = %d ", (i + 1), b[i], (i + 1), a[i])
	}
	printf("\n");
	fort(i = 0; i < (2 * n); i++) {
		printf("C[%d] = %d || ", (i + 1), c[i]);
	}
	return 0;
}
