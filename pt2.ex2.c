#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float Fahrenheit, celsius; 
    
    printf ("Informe a temperatura em Fahrenheit: ");
    scanf("%f", &Fahrenheit);
    
    celsius = (5.0f/9.0f) * (Fahrenheit - 32);
    
    printf("A temperatura e Celsius eh de: %.2f", celsius);

    return 0;
}