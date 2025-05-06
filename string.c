#include <stdio.h>
#include <string.h>

int main()
{
    char palavra[100];
    int leitor;
    
    printf("Insira uma palavra(de ate 100 letras): ");
    fgets(palavra, sizeof(palavra), stdin);
    
    palavra[strcspn(palavra, "\n")] = '\0';
    
    leitor = strlen(palavra);
    
    if(palavra[0] == 'A' || palavra[0] == 'a'){
        printf("A palavra começa com a letra A.\n");
    } else {
        printf("A palavra nao começa com a letra A.\n");
    }
    
    printf("A palavra inserida possui %d letras.\n", leitor);

    return 0;
}