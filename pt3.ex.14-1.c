#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    char n, n1, n2;

    printf("insira 3 carateres (um por vez): ");
    scanf("%c %c %c", &n, &n1, &n2);

    printf("\"%c\"\n\"%c\"\n\"%c\"\n", n, n1, n2);

    return 0;
}
