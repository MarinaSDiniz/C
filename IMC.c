#include<stdio.h>
#include<math.h>

int main(){

    float peso, altura, IMC;
    
    printf("Ínsira seu peso(kg) e altura(m): ");
    scanf("%f %f", &peso, &altura);
    
    IMC = ((float)peso / pow(altura, 2));
    
    if (IMC < 18.5){
        printf("abaixo do peso");
    } else if (IMC >= 18.5 && IMC < 25){
        printf("peso normal");
    } else if (IMC >= 25 && IMC < 30){
        printf("sobre peso");
    } else if (IMC < 30){
        printf("obesidade");
    }
    return 0;
}