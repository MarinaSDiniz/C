#include <stdio.h>
#include <stdlib.h>

int main()
{
    int peso1, peso2, peso3;
    float num1, num2, num3, media;
    
    printf("Insira 3 notas: ");
    scanf("%f %f %f", &num1, &num2, &num3);
    printf("Insira os respectivos pesos: ");
    scanf("%d %d %d", &peso1, &peso2, &peso3);
    
    media = (num1 * peso1 + num2 * peso2 + num3 * peso3)/(float)(peso1 + peso2 + peso3);

    printf("Media: %.2f\n", media);

    if(media >= 7){
        printf("aprovado.\n");
    } else if (media >= 5){
        printf("Recuperacao.\n");
    } else {
        printf("reprovado.\n");
    }
    return 0;
}