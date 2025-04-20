#include <stdio.h>
#include <math.h>

void primo(int m, int *p1, int *p2) {
    int i, j, ehPrimo;

    // Maior primo menor que m
    for (i = m - 1; i > 1; i--) {
        ehPrimo = 1;
        for (j = 2; j <= sqrt(i); j++) {
            if (i % j == 0) {
                ehPrimo = 0;
                break;
            }
        }
        if (ehPrimo) {
            *p1 = i;
            break;
        }
    }

    // Menor primo maior que m
    for (i = m + 1; ; i++) {
        ehPrimo = 1;
        for (j = 2; j <= sqrt(i); j++) {
            if (i % j == 0) {
                ehPrimo = 0;
                break;
            }
        }
        if (ehPrimo) {
            *p2 = i;
            break;
        }
    }
}

int main() {
    int m, p1 = 0, p2 = 0;

    printf("Digite um valor inteiro: ");
    scanf("%d", &m);

    primo(m, &p1, &p2);

    printf("Maior primo menor que %d: %d\n", m, p1);
    printf("Menor primo maior que %d: %d\n", m, p2);

    return 0;
}
