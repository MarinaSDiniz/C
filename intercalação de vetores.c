#include <stdio.h>

int main()
{
    int vetor[10][10];
    int n1, n2;
    
    for(int i = 0; i < 10; i++){
        printf("Insira o valor para a posicao %d em x: ", i + 1);
        scanf("%d", &n1);
        for(int j = 0; j < 10; j++){
            printf("Insira o valor para a posicao %d em y: ", j + 1);
            scanf("%d", &n2);
            
            printf("vetor x[%d] = %d\n", i + 1, n1);
            printf("vetor y[%d] = %d\n", j + 1, n2);
            
        }
    }

    return 0;
}