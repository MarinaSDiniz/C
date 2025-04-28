#include <stdio.h>

struct Animal {
    char nome[50];
    char nomeDono[50];
    int idade;
};


int main()
{
    struct Animal pet;
    
    printf("Digite o nome:\n");
    scanf("%49s", pet.nome);

    printf("Digite o nome do dono:\n");
    scanf("%49s", pet.nomeDono);
    
    printf("Digite a idade:\n");
    scanf("%d", &pet.idade);

    printf("O nome eh: %s\nO nome do dono eh: %s\nA idade do pet eh: %d", 
    pet.nome, pet.nomeDono, pet.idade);

    return 0;
}