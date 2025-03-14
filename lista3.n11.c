#include <stdio.h>

int main()
{
    int numero = 42;
    
    do{
    printf("Adivinhe o numero: ");
    scanf("%d", &numero);
    
    if(numero > 42){
            printf("O valor inserido eh maior.\n");
        } else if (numero < 42){
            printf("O valor inserido eh menor.\n");
        } else {
            printf("parabens o numero eh 42!\n");
        }
    }
    
   while (numero != 42);
   
   return 0;
}