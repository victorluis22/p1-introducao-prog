/*
	Victor Luis Teixeira Reis - 202110049511 - Questão 1
*/

#include <stdio.h>

int main() {
	int n, i, numAntigo, numAtual, segmentos = 0;
	
	printf("Insira o tamanho da sequencia: ");
	scanf("%d", &n);
	
	for(i = 1; i <= n; i++) {
		printf("Insira o %d numero inteiro da sequencia: ", i);
		scanf("%d", &numAtual);
		
		if(i == 1) {
			segmentos++;
		}
		else{
			if(numAtual != numAntigo) {
				segmentos++;
			}
		}
		
		numAntigo = numAtual;
	}
	
	printf("\nA quantidade de segmentos diferentes eh: %d", segmentos);
	return 0;
}
