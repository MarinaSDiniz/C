#include <stdio.h>
#include <stdlib.h>

int main(){
    int vetor[10], soma = 0;
    int maior;
    
    for(int i = 0; i < 10; i++){
        scanf("%d", &vetor[i]);
        soma += vetor[i];
        
        if(i == 0 ||  vetor[i] > maior){
        maior = vetor[i];
        }
    }
    
    printf("O maior número do vetor é: %d\n", maior);
    printf("a soma dos valores do vetor eh: %d", soma);
    
    return 0;
}