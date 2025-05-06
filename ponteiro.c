#include <stdio.h>

void dobrar(int *x) {
    *x = *x * 2;
}

int main()
{
    int x;
    
    printf("Insira um valor inteiro: ");
    scanf("%d", &x);
    
    printf("Antes de dobrar: %d\n", x);
    
    dobrar(&x);
    
    printf("Apos dobrar: %d\n", x);

    return 0;
}