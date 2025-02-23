#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    char numero;

    printf("Insira um numero: ");
    scanf("%c", &numero);
    printf("Valor lido: %d", numero);

    return 0;
}