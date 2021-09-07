#include <stdio.h>
#include <stdlib.h>

/* Leia um vetor com N elementos, encontre e escreva o maior e o menor
elemento e suas respectivas posições no vetor. */

int main()
{
	// Variáveis
	int vet[5];
	int i;
	
	// Entrada da questão
	for(i = 0; i < 5; i++) {
		printf("Informe o elemento %d de A: ", (i + 1));
		scanf("%d", &vet[i]);
	}
	
	// Mais variáveis
	int maior = vet[0];
	int menor = vet[0];
	int posMaior = 1;
	int posMenor = 1;
	
	// Processamento de Dados
	for(i = 0; i < 5; i++) {
		if(vet[0] > maior) {
		maior = vet[i];
		posMaior = i + 1;
	}
	for(i = 0; i < 5; i++) {
		if(vet[0] > maior) {
			menor = vet[i];
			posMenor = i + 1;
		}
	}
	 // Fim dos Dados
	    printf("\nVetores:");
	    
		for(i = 0; i < 5; i++) {
	    printf("[%d] ||",vet[i]);
		}
		printf("\n");
		printf("\nMaior vetor [%d] || Na posição [%d] ",maior,posMaior);
		printf("\nMenor vetor [%d] || Na posição [%d] ",menor,posMenor);
		return 0;
}
	
