#include <stdio.h>
#include <ctype.h>

int main()
{
    char caractere;
    
    printf("Insira um caracter: ");
    scanf("%c", &caractere);
 
    if(isalpha(caractere)) {
        
        char lower = tolower(caractere);
        
        if(lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u'){
            printf("vogal.");
        } else {
            printf("consoante");
        }
    } 
    
    else if (isdigit(caractere)) {
        printf("numero.");
    } else {
        printf("simbolo.");
    }
    return 0;
}