#include<stdio.h>
#include<math.h>

int main(){

    float preco;
    
    printf("Ínsira o preço: ");
    scanf("%f", &preco);
    
    if (preco < 50){
        printf("barato");
    } else if (preco >= 50 && preco < 150){
        printf("medio");
    } else if (preco <= 150){
        printf("caro");
    }
    return 0;
}