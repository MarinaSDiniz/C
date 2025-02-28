#include<stdio.h>
#include<math.h>

int main(){

    int nota;
    
    printf("Ínsira a nota: ");
    scanf("%d", &nota);
    
    if (nota > 0 && nota <= 10 ){
        printf("válido");
    } else {
        printf("inválido");
    } 
        
    return 0;
}