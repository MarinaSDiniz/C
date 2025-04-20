#include <stdio.h>

void ex(int *n){
    float calc;
    int fat = 1;

    for(int i = 1; i <= *n; i++){
        fat *= i;
    }
    calc = 1.0 + (1.0 / fat);
    printf("O calculo é igual a: %.4f", calc);
}

int main()
{
    int n;
    
    printf("Insira um valor: ");
    scanf("%d", &n);
    
    ex(&n);

    return 0;
}