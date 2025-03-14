#include <stdio.h>

int main()
{
	int numero;

	printf("Insira um numero de 0 a 100: ");
	scanf("%d", &numero);

	if(numero > 0 && numero < 100) {
		if (numero >= 90 && numero <= 100) {
			printf("Sua nota equivale a A.");
		} else if (numero >= 80 && numero <= 89) {
			printf("Sua nota equivale a B.");
		} else if (numero >= 70 && numero <= 79){
            printf("Sua nota equivale a C.");
	    } else if (numero >= 60 && numero <= 69){
            printf("Sua nota equivale a D.");
	    } else if (numero >= 0 && numero <= 59){
            printf("Sua nota equivale a F.");
	    }
	} else {
		printf("Numero invalido.");
	}
	return 0;
}