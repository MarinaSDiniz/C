#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int numero;

    printf("%Insira um numero: ");
    scanf("%d", &numero);
    printf("Valor lido: %f", numero);

    return 0;
}