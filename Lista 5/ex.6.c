#include <stdio.h>
#include <math.h>

void ex(int *x, int *y, int *z){
    
    if(*x < *y + *z && *y < *x + *z && *z < *x + *y){
        if(*x == *y && *x == *z){
            printf("Triangulo equilatero");
        } else if(*x == *y || *x == *z || *y == *z){
            printf("Triangulo isosceles");
        } else if(*x != *y && *x != *z && *y != *z){
            printf("Triangulo escaleno");
        }
    } else {
        printf("Erro...");
    }
}

int main()
{
    int x, y, z;
    
    printf("Insira 3 valores para calcular o triangulo: ");
    scanf("%d %d %d", &x, &y, &z);
    
    ex(&x, &y, &z);

    return 0;
}