#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    
    float a, b, hipotenusa;
    
    printf("Insira os valores de a e b referentes aos catetos: ");
    scanf("%f %f", &a, &b);
    
    hipotenusa = sqrt(pow(a, 2) + pow(b, 2));
    
    printf("A hipotenusa é igual a: %.3f", hipotenusa);

    return 0;
}