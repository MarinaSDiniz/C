#include <stdio.h>

int main() {
    int numero;
    
    printf("Insira um numero: ");
    scanf("%d", &numero);
    
    if (numero <= 1) {
        printf("Nao eh primo.\n");
    } 
    else if (numero == 2 || numero == 3 || numero == 5 || numero == 7) {
        printf("Eh primo.\n");
    } 
    else if (numero % 2 == 0 || numero % 3 == 0 || numero % 5 == 0 || numero % 7 == 0) {
        printf("Nao eh primo.\n");
    } 
    else {
        printf("Eh primo.\n");
    }

    return 0;
}
