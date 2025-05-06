#include <stdio.h>

int main(){
    int matriz[3][3];
    int soma = 0;

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
        
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &matriz[i][j]);
        
        soma += matriz[i][j];
        }
    }
    
    printf("A soma dos valores da matriz eh: %d", soma);
}