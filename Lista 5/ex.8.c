#include <stdio.h>

void lerValores(int *a, int *b, int *c){
    printf("NOME_VARIAVEL\tENDEREÇO\t\tVALOR\n");
    printf("a\t\t%p\t\t%d\n", (void*)a, *a);
    printf("b\t\t%p\t\t%d\n", (void*)b, *b);
    printf("c\t\t%p\t\t%d\n", (void*)c, *c);
}

int main()
{
    int a = 5, b = 9, c = 1;
    
    lerValores(&a, &b, &c);
    
    return 0;
}