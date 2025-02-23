#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    float inv, taxa, juros, meses, montante;

    setlocale(LC_ALL, "Portuguese");

    printf("informe: o valor a ser investido, taxa juros mensais ao capital, meses: \n");
    scanf("%f %f %f",&inv, &taxa, &meses);

    montante = inv * pow(1 + taxa, meses);
    juros = montante - inv;

    printf("O valor total acumulado ao final período é de: R$%.2f\nO valor de juros rendidos é de: R$%.2f", montante, juros);

    return 0;
}