#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    float reais, cotacao, dolares;

    printf("Insira um valor em reias e a cotação do dólar: ");
    scanf("%f %f", &reais, &cotacao);

    dolares = reais / cotacao;

    printf("R$%.1f  em dólares é = $%.5f", reais, dolares);

    return 0;
}