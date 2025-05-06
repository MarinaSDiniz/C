#include <stdio.h>

int maior(int a, int b) {
    return (a > b) ? a : b;
}

int main()
{
    int a, b, maiorNumero;
    
    printf("Insira 2 valores(inteiros): ");
    scanf("%d %d", &a, &b);
    
    maiorNumero = maior(a, b);
    
    printf("o maior eh: %d\n",maiorNumero);

    return 0;
}