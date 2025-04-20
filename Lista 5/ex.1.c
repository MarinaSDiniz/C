#include <stdio.h>

void recebeNota(int *nota1, int *nota2, int *nota3, char letra) {
    float calc;

    if (letra == 'A') {
        calc = (*nota1 + *nota2 + *nota3) / 3.0;
        printf("Média aritmética: %.2f\n", calc);
    } else if (letra == 'P') {
        calc = (*nota1 * 5 + *nota2 * 3 + *nota3 * 2) / 10.0;
        printf("Média ponderada: %.2f\n", calc);
    } 
}

int main() {
    int n;
    char letra;

    printf("Digite A para média aritmética ou P para ponderada: ");
    scanf(" %c", &letra);
    printf("Quantos alunos? ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        int nota1, nota2, nota3;
        printf("Aluno %d\n", i + 1);
        printf("Nota 1: ");
        scanf("%d", &nota1);
        printf("Nota 2: ");
        scanf("%d", &nota2);
        printf("Nota 3: ");
        scanf("%d", &nota3);
        
        recebeNota(&nota1, &nota2, &nota3, letra);
    }

    return 0;
}
