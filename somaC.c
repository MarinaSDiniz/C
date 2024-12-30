#include <stdio.h>

int soma(int num1, int num2){
    return num1 + num2;
}

int main()
{
    int n1, n2;
    
    printf("Digite 2 numeros inteiros para serem somados\n");
    printf("Primeiro numero: ");
    scanf("%d", &n1);
    printf("Segundo numero: ");
    scanf("%d", &n2);
    
    int soma2 = soma(n1, n2);
    
    printf("a soma de %d e %d = %d", n1, n2, soma2);
    return 0;
}