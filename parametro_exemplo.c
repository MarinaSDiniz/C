#include <stdio.h>

void ponteiro(int *n) {
    *n = *n + 5;
}

int main() {
    int n = 10;

    printf("%d original\n", n);
    ponteiro(&n);
    printf("%d modificado\n", n);
    
    return 0;
}