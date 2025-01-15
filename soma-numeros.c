#include <stdio.h>

int main(){
    
    int numero, soma = 0;
    
    do {
        printf("Insira um valor inteiro(0 para sair): ");
        scanf("%d", &numero);
        soma += numero;
    }
    while(numero != 0);
    
    printf("A soma dos números inseridos é: %d\n", soma);
    
    return 0;
}