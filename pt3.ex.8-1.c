#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int n1, n2;

    printf("Insira 2 numeros: ");
    scanf("%d %d", &n1, &n2);
    printf("invertidos: %d e %d", n2, n1);

    return 0;
}