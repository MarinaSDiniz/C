#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n, n2, n3, soma, media, produto;

    printf("insira 3 numeros : ");
    scanf("%f %f %f",&n,&n2,&n3);

    soma = n + n2 + n3;
    media = (n + n2 + n3)/3;
    produto = n*n2*n3;

    printf("a soma eh: %2.f\na media eh: %2.f\no produto eh: %2.f\n", soma, media, produto);


    return 0;
}
