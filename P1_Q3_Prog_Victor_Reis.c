/*
	Victor Luis Teixeira Reis - 202110049511 - Questão 3
*/

#include <stdio.h>
#include <math.h>


int main() {
	int i;
	int dezena1, dezena2;
	float raiz;
	
	for(i = 1000; i < 10000; i++) {
		dezena1 = i/100;
		dezena2 = i%100;
		
		raiz = sqrt(i);
		
		if(raiz == dezena1 + dezena2){
			printf("sqrt(%d) = %d + %d = %d\n", i, dezena1, dezena2, dezena1+dezena2);
		}
	}
	return 0;
}
