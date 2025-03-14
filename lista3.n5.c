#include <stdio.h>
#include <stdlib.h>

int main()
{
    float consumo, calculo;
    
    printf("Insira o consumo mensal de agua(m^3): ");
    scanf("%f", &consumo);
    
    if(consumo <= 10){
        calculo = 10.00;
    } else if (consumo >= 11 && consumo <= 30){
        calculo = 10.00 + (consumo - 10) * 1.50;
    } else if (consumo > 30){
        calculo = 10.00 + (30 - 10) * 1.50 + (consumo - 30) * 2.50;
    }
    
    printf("O valor da conta eh R$%.2f.\n", calculo);
    
    return 0;
}