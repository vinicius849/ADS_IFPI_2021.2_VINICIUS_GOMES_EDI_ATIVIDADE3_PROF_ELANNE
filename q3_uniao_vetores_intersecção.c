#include <stdio.h>
#include <stdlib.h>

/* Leia dois vetores A e B com N elementos, escreva o conjunto Uni�o entre os
vetores A e B; e o conjunto Intersec��o entre os vetores A e B. */

int main(void)
{
	// Vari�veis
	int A[5], B[5], Uniao[10], i;
	int op, aux;
	int cont = 5;
	int cont_Igualdade;
	
	printf("<Uni�o e Intersec��o de A e B>\n");
	printf("\n");
	
	// Entrada
	for(i = 0; i < 5; i++) {
		printf("Informe o elemento %d de A ", (i + 1));
		scanf("%d", &A[i]);
	}
	for(i = 0; i < 5; i++) {
		printf("Informe o elemento %d de B ", (i + 1));
		scanf("%d", &B[i]);
	}
	
	// Meio da quest�o
	
	// Processo de Uni�o de termos
	printf("\nUni�o\n");
	for(int i = 0; i < 5; ++i) {
	Uniao[i] = A[i];
	}
	
	for(int i = 0; i < 5; ++i) {
	cont_Igualdade = 0;
	}
	
	for(int j = 0; j < 5; ++j) {
		if(B[i] == A[j]) cont_Igualdade++ {
		}
		if(cont_Igualdade == 0) Uniao[cont++] = B[i] {
		}
	}
		
	for(int i = 0; i < cont; ++i) {
		for(int j = 0; j < cont; ++j) {
		if(Uniao[j] > Uniao[i]) {
			aux = Uniao[j];
			Uniao[j] = Uniao[i];
			Uniao[i] = aux;
		}
		}
}
	for(int i = 0; i < cont; ++i) {
		// Sa�da n�mero 02
		// Exibi��o do vetor Uni�o para o usu�rio
		
		printf("%d||", Uniao[i]);
		
		// Interseccao de vetores
		printf("\nInteresec��o\n");
		for(int i = 0; i < 5; ++i) {
			for(int i =0; j < 5; ++j) {
				if(A[i] == B[j]) {
				}
			}
		}
}
		// Sa�da n�mero 03
		// Exibindo o vetor Intersec��o para o usu�rio
		printf("%d||", A[i]);
		printf("\n||Vers�o 1.3||");
		
		return("Pause");
}
