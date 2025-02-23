#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    
    float altura, raio, volume;
    
    printf("Insira a altura e o raio do cilíndro: ");
    scanf("%f %f", &altura, &raio);
    
    volume = (3.141592 * pow(raio, 2) * altura);
    
    printf("O volume do cilíndro é: %.3f", volume);

    return 0;
}