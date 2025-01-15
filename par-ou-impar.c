#include <stdio.h>

int main(){
    
    int numero;
    
    printf("Insira um valor inteiro: ");
    scanf("%d", &numero);
    
    if(numero >= 0){
        printf("eh um numero positivo\n");
        
        if((numero % 2) == 0 ){
            printf("eh um numero par\n");
        } else {
            printf("nao eh um numero par\n");
        }
    } else {
        printf("eh um numero negativo\n");
    }

    return 0;
}