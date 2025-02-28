#include <stdio.h>
#include <stdlib.h>

int main(){

    int a, b, c;

    printf("digite 3 valores: ");
    scanf("%d %d %d", &a, &b, &c);

    if(( a + b ) > c){
        if (a == b && a == c && b == c){
            printf("equilatero");
        } else if (a == b || a == c || b == c){
            printf("Isosceles");
        } else if (a != b && a != c && b != c){
            printf("Escaleno");
        }
    } else {
        printf("triangulo invalido");
    }
    return 0;
}