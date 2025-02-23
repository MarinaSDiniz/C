#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    float n;

    printf("Insira um valor: ");
    scanf("%f", &n);

    printf("%.1f é a quinta parte de %.0f", n/5, n);

    return 0;
}