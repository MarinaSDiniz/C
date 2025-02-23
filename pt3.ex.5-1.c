#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    float numero;

    printf("%Insira um numero: ");
    scanf("%f", &numero);
    printf("Valor lido: %d", numero);

    return 0;
}