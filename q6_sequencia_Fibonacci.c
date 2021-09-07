#include <stdio.h>
#include <stdlib.h>

/* Gere um vetor com N primeiros termos da sequência de Fibonacci
(0,1,1,2,3,5,8,13,21,...) */

int main()
{
	// Variáveis
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
	
	// Saída da sequência matemática
	printf("[%d] || ", r[i]);
	}
	return 0;
}
	
