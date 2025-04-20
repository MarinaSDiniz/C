#include <stdio.h>
#include <math.h>

void ex(int *n){
    float calc, soma = 0.0;

    for(int i = 1; i <= *n; i++){
        calc = (pow(i, 2) + 1) / (float)(i + 3);
        soma += calc;
    }
    
    printf("O calculo é igual a: %.2f", soma);
}

int main()
{
    int n;
    
    printf("Insira um valor: ");
    scanf("%d", &n);
    
    ex(&n);

    return 0;
}