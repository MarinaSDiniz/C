#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char nome[50];
    int idade;
    float nota;
} Aluno;

int main(){
    Aluno alunos[2];
    int maiorNota = 0;
    
    
    for(int i = 0; i < 2; i++){
        printf("Digite o nome do aluno %d: ", i + 1);
        scanf(" %[^\n]", alunos[i].nome);
        
        printf("Digite a idade do aluno %d: ", i + 1);
        scanf("%d", &alunos[i].idade);

        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%f", &alunos[i].nota);
    }
    
    if (alunos[1].nota > alunos[0].nota) {
            maiorNota = 1;
    }
    
    printf("\nAluno com maior nota: %s\n", alunos[maiorNota].nome);
    
    return 0;
}