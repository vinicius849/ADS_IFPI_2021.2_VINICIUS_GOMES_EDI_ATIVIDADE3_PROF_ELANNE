#include <stdio.h>
#include <stdlib.h>

/* Leia um vetor A com N elementos e escreva um vetor B, com os mesmos elementos de A,
sendo que estes dever�o estar invertidos, ou seja, o 1� elemento elemento de A deve ser
o �ltimo elemento de B; o 2� elemento de A deve ser o pen�ltimo elemento de B e assim
por diante. */

int main(void)
{
	// Estabelecendo vari�veis
	int a[5], b[5], i;
	
	// Entrada
	for(i = 0; i <= 4; i++) {
		printf("Informe o elemento n�mero %d de A: ", (i + 1));
		scanf("%d", &a[i]);
	}
	// Processamento
/* Vetor B com o Vetor A invertido */

	for(i = 0; i <= 4; i++)
	{
		b[i] = a[4 - 1]
	}
	// Vetores A e B
	// Sa�da
	for(i = 0; i <= 4; i++) {
		printf("\nA[%d] = %d, B[%d] = %d \n", (i + 1), a[i], (i + 1), b[i])
	}
	
	return 0;
}
	
	

	
	

