#include <stdio.h>
#include <stdlib.h>

int main(){
    int matriz[3][3], somaDiagonal = 0;
    
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
        printf("Insira o valor da posicao matriz[%d][%d]: ", i, j);
        scanf("%d", &matriz[i][j]);
        }
    }
    
    for (int i = 0; i < 3; i++) {
        somaDiagonal += matriz[i][i];
    }
    
    printf("\n~ Matriz ~\n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
        printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    
    printf("a soma dos valores do vetor eh: %d", somaDiagonal);
    
    return 0;
}