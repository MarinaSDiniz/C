#include<stdio.h>

int main(){

    int n;
    
    printf("escolha um n°: ");
    scanf("%d", &n);
    
    if ( n % 2 == 0){
        printf("par");
    } else {
        printf("Impar");
    }
    
    return 0;
}