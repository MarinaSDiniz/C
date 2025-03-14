#include <stdio.h>

int main() {
    int numero, primeiro, ultimo;
    
    printf("Insira um numero de 3 digitos: ");
    scanf("%d", &numero);
    
    primeiro = numero / 100;
    ultimo = numero % 10;
    
    if(primeiro == ultimo){
        printf("Eh um palindromo.");
    } else {
        printf("Não eh um palindromo");
    }
    
    return 0;
}
