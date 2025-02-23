#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    char letra;
    int numero;
    float voa;

    printf("Insira os seguintes valores: (1 letra, 1 nºinteiro, 1 nº flutuante): ");
    scanf("%c %d %f", &letra, &numero, &voa);

    printf("%c %d %.2f\n %c \t %d \t %.2f \n %c \n %d \n %.2f\n", letra, numero, voa, letra, numero, voa, letra, numero, voa);

    return 0;
}