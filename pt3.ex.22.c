#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    float graus, radianos;

    printf("Insira um angulo em graus: ");
    scanf("%f", &graus);

    radianos = (graus*3.141592)/180;

    printf("%.1f  em graus é = %.5f em radianos", graus, radianos);

    return 0;
}