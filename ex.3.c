#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, n2, passe;

    printf("insira 2 numeros : ");
    scanf("%d %d",&n,&n2);

    passe = n2;
    n2 = n;
    n = passe;

    printf("n eh: %d e n2 eh: %d", n, n2);


    return 0;
}
