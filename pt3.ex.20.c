#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    float velocidade, metros;

    printf("Insira a velocidade em km/h: ");
    scanf("%f", &velocidade);

    metros = velocidade/36;

    printf("%.1f km/h em m/s = %.2f", velocidade, metros);

    return 0;
}