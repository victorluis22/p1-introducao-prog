/*
	Victor Luis Teixeira Reis - 202110049511 - Questão 2
*/

#include <stdio.h>
#include <math.h>
#define e 2.71828183

int fatorial(int n) {
	int resultado = 1, i;
	
	for(i = n; n > 0; n--){
		resultado *= n;
	}
	
	return resultado;
}

float neperiano(int n){
	
	int i;
	float resultado = 0;
	
	for(i = 0; i <= n; i++) {
		resultado += (1.0/fatorial(i));
	}
	
	return resultado;
}

int main() {
	int num;
	
	printf("Insira o numero inteiro N de termos: ");
	scanf("%d", &num);
	
	printf("O numero  neperiano de %d termos eh %.8f\n", num, neperiano(num));
	printf("O erro da medida eh: %.8f\n", fabs((e - neperiano(num))));
	
	return 0;
}
