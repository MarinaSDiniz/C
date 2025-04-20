#include <stdio.h>

void crescente(int *n1, int *n2, int *n3) {

    int temp;

    if (*n1 > *n2) {
        temp = *n1;
        *n1 = *n2;
        *n2 = temp;
    }
    
    if (*n1 > *n3) {
        temp = *n1;
        *n1 = *n3;
        *n3 = temp;
    }

    if (*n2 > *n3) {
        temp = *n2;
        *n2 = *n3;
        *n3 = temp;
    }

    printf("Ordem crescente: %d %d %d\n\n", *n1, *n2, *n3);
}

int main() {
    int n;

    printf("Quantos conjuntos? ");
	scanf("%d", &n);

    for(int i = 0; i < n; i++){
        int n1, n2, n3;
    printf("conjunto %d\n", i + 1);
    printf("insira 3 valores: ");
    scanf("%d %d %d", &n1, &n2, &n3);
	    crescente(&n1, &n2, &n3);
    }
    
    return 0;
}