#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    
    char maiuscula, minuscula;
    
    printf("Digite uma letra maiuscula: ");
    scanf("%c", &maiuscula);
    
    if(maiuscula >= 'A' && maiuscula <= 'Z'){
        minuscula = maiuscula + 32;
        printf("%c corresponde a: %c", maiuscula, minuscula);
    } else {
        printf("Insira uma letra MAIUSCULA.");
    }

    return 0;
}