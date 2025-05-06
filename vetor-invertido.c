#include <stdio.h>

int main() {
    int X[100];
    
    printf("insira os valores\n");
    for(int i = 0; i < 10; i++){
        printf("X[%d]: ", i);
        scanf("%d", &X[i]);
    }
    
    printf("Elementos invertidos\n");
    for(int i = 9; i >= 0; i--){
        printf("%d ", X[i]);
    }
    
    return 0;
}
