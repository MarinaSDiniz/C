#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
	int velocidade;

	printf("Insira a velocidade do carro: ");
	scanf("%d", &velocidade);

	if(velocidade > 0) {
		if (velocidade > 80) {
			printf("Multa aplicada!");
		} else if (velocidade >= 61 && velocidade <= 80) {
			printf("Cuidado! Você está acima do limite.");
		} else if (velocidade <= 60){
            printf("Velocidade dentro do limite.");
	    } 
	} else {
		printf("Numero invalido.");
	}
	return 0;
}