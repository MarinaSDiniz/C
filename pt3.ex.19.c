#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int idade, ano_atual, calc, nasc;

    printf("Insira sua idade e o ano atual: ");
    scanf("%d %d", &idade, &ano_atual);

    nasc = ano_atual - idade;

    printf("você nasceu em %d não é?", nasc);

    return 0;
}