#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float altura, peso, imc; 
    
    printf ("Informe sua altura e peso: ");
    scanf("%f %f", &altura, &peso);
    
    imc = peso / pow(altura, 2);
    
    printf("Seu IMC eh: %.2f", imc);

    return 0;
}