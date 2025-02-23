#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int n;

    printf("Insira um valor: ");
    scanf("%d", &n);

    printf("%d antecede %d e %d sucede %d", n-1, n, n+1, n);

    return 0;
}