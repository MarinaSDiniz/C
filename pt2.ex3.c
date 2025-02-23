#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2, n3, reserva; 
    
    printf ("Informe 3 numeros: ");
    scanf("%d %d %d", &n1, &n2, &n3);
    
    printf("ordem inicial: %d %d %d \n", n1, n2, n3);
    
    reserva = n1;
    n1 = n3;
    n3 = reserva;
    
    printf("ondem invertida: %d %d %d", n1, n2, n3);
    
    return 0;
}