#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char linha[128];
    int contador = 0;
    
    printf("digite uma linha:\n");
    fgets(linha, 128, stdin);
    
    while (linha[contador] != '\0'){
        contador++;
    }
    
    if(linha[contador - 1] == '\n'){
        contador--;
    }
    
    printf("A linha digitada tem %d caracteres.\n", contador);
    
    return 0;
}
