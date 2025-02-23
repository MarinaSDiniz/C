#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    char n;

    printf("insira um caratere: ");
    scanf("%c", &n);

    printf("\"%c\"", n);

    return 0;
}

