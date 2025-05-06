#include <stdio.h>

void troca(int *a, int *b){
    int temp = 0;
    
    temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int a, b;
        printf("insira 2 valores: ");
        scanf("%d %d", &a, &b);
    
    printf("Valores originais. \n %d, %d.", a, b);
    
    troca(&a, &b);
    
    printf("\nValores invertidos. \n %d, %d.", a, b);
}
