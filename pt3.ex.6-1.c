#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    double numero;

    printf("%Insira um numero: ");
    scanf("%le", &numero);
    printf("Valor lido: %.5e", numero);

    return 0;
}