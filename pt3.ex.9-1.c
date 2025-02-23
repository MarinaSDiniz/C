#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    float n1, n2;

    printf("Insira 2 numeros: ");
    scanf("%f %f", &n1, &n2);
    printf("invertidos: %.2f e %.2f", n2, n1);

    return 0;
}