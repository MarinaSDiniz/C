#include <stdio.h>
#include <string.h>

int main()
{
    int senha = 1234;
    char login[10];
    
    printf("Insira o login: ");
    scanf("%9s", login);
    printf("Insira a senha: ");
    scanf("%d", &senha);

    if(strcmp(login, "admin") == 0 && senha == 1234){
        printf("Acesso permitido.");
    } else {
        printf("Acesso negado.");
    }
    return 0;
}