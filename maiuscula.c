#include <stdio.h>
#include <ctype.h>

int main() {
    char texto[100];
    
    printf("digite uma palavra:\n");
    scanf("%99s", texto);
    
    for (int i = 0; texto[i] != '\0'; i++) {
        texto[i] = toupper(texto[i]);
    }
    
    printf("\nMaiusculas: %s\n", texto);
    
    return 0;
}
