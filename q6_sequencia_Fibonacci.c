#include <stdio.h>
#include <stdlib.h>

/* Gere um vetor com N primeiros termos da sequ�ncia de Fibonacci
(0,1,1,2,3,5,8,13,21,...) */

int main()
{
	// Vari�veis
	int i, f1, f2, fn, r[10];
	i = 0;
	f1 = 0;
	f2 = 1;
	
	// Processamento
	for(i = 0; i < 10; i++) {
		fn = f1 + f2;
		f2 = f1;
		f1 = fn;
		r[i] = fn;
	
	// Sa�da da sequ�ncia matem�tica
	printf("[%d] || ", r[i]);
	}
	return 0;
}
	
