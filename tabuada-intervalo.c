#include <stdio.h>

int main()
{
    int numero, intervalo;
    
    printf("Insira um numero inteiro referente a tabuada desejada: ");
    scanf("%d", &numero);
    printf("Insira o intervalo (1 a ...): ");
    scanf("%d", &intervalo);
    
    for(int i = 0; i <= intervalo; i++){
        printf("%d x %d = %d\n", numero, i, numero * i);
    }
    return 0;
}