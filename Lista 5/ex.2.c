#include <stdio.h>

void media(int *membro, float *salario) {
    float calc;

    calc = *salario / *membro;
        printf("Salario medio por pessoa: %.2f\n\n", calc); 
}

int main() {
    int membro;
    float salario;

    int marker = 1;

    while (1) {
        printf("Familia %d\n", marker);
        printf("Quantos membros? (0 para sair): ");
        scanf("%d", &membro);

        if (membro == 0) break;

        printf("Qual o salario familiar? ");
        scanf("%f", &salario);

        media(&membro, &salario);

        marker++;
    }

    return 0;
}