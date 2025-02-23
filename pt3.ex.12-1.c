#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define N  3

int main()
{
    setlocale(LC_ALL, "portuguese");

    int n;

    printf("insira um numero inteiro: ");
    scanf("%d", &n);

    printf("%d é uma constante inteira e %d é uma variável inteira", N, n);

    return 0;
}
