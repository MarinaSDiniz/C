#include <stdio.h>

void teste(int n, int *b, int *k) {
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            *b = i;
            *k = n / i;
            break;
        }
    }
}

int main() {
    int n, b, k;

    printf("Digite um valor: ");
    scanf("%d", &n);

    teste(n, &b, &k);

    printf("%d * %d = %d\n", b, k, n);

    return 0;
}