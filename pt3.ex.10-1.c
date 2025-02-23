#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int dia, mes, ano;

    printf("Insira o dia, mês e ano: ");
    scanf("%d %d %d", &dia, &mes, &ano);
    printf("A data é: %d/%d/%d.", dia, mes, ano);

    return 0;
}