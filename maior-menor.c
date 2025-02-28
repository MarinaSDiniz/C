#include<stdio.h>

int main(){

    int n, n1;
    
    printf("escolha 2 n°s: ");
    scanf("%d %d", &n, &n1);
    
    if ( n > n1){
        printf("o primeiro número: %d é maior", n);
    } else {
        printf("o segundo número: %d é maior", n1);
    } 
    
    return 0;
}