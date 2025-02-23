#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dias, anos, semanas, dRestante; 
    
    printf ("Informe os dias: ");
    scanf("%d", &dias);
    
    anos = dias / 365;
    dRestante = dias % 365;
    semanas = dRestante / 7;
    dRestante = dRestante % 7;
    
    printf("%d dias = %d ano(s), %d semana(s) e %d dia(s)\n", dias, anos, semanas, dRestante);
    
    return 0;
}