#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int n, n1, n2;

    printf("Insira 3 valores inteiros para serem somados: ");
    scanf("%d %d %d", &n, &n1, &n2);

    printf("%d + %d + %d = %d", n, n1, n2, n+n1+n2);

    return 0;
}
