#include <stdio.h>
#include <stdlib.h>

struct Aluno{
    char nome[50];
    int nota;
    int matricula;
};

int main()
{
    int n;
    
    printf("Insira quantos alunos serao cadastrados: ");
    scanf("%d", &n);
    
    struct Aluno *alunos = malloc(n * sizeof(struct Aluno));
    /*if(alunos == NULL){
        printf("Erro na alocaçao de memoria.\n");
        return 1;
    }*/
    
    for(int i = 0; i < n; i++){
        printf("Aluno %d\n", i + 1);
        
        printf("nome: ");
        scanf("%s", alunos[i].nome);
        printf("nota: ");
        scanf("%d", &alunos[i].nota);
        printf("matricula: ");
        scanf("%d", &alunos[i].matricula);
    }

    printf("\n--- Lista de Alunos ---\n");
    for (int i = 0; i < n; i++) {
        printf("Aluno %d\n", i + 1);
        printf("Nome: %s\n", alunos[i].nome);
        printf("Nota: %d\n", alunos[i].nota);
        printf("Matrícula: %d\n\n", alunos[i].matricula);
    }

    free(alunos);
    
    return 0;
}