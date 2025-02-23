#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define N  3.00

int main()
{
    setlocale(LC_ALL, "portuguese");

    printf("%f", N);

    return 0;
}
