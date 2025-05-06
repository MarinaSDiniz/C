#include <stdio.h>

int main() {
    int X[10], Y[10], Z[20];
    
    printf("Digite os 10 elementos do vetor X:\n");
    for(int i = 0; i < 10; i++){
        printf("X[%d]: ", i);
        scanf("%d", &X[i]);
    }
    
    printf("Digite os 10 elementos do vetor Y:\n");
    for(int i = 0; i < 10; i++){
        printf("Y[%d]: ", i);
        scanf("%d", &Y[i]);
    }
    
    for(int i = 0, j = 0; i < 10; i++){
        Z[j++] = X[i];
        Z[j++] = Y[i];
    }
    
    printf("Vetor Z intercalado:\n");
    for(int i = 0; i < 20; i++){
        printf("%d ", Z[i]);
    }
    return 0;
}
