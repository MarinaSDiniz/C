#include <stdio.h>
#include <stdlib.h>

float media(float v[], int n){
    float media = 0.0;
    for(int i = 0; i < n; i++){
        media += v[i];
    }
    return media / n;
}

int main()
{
   int n;
   float v[50], resultado;
   
   printf("Insira o valor para determinar o tamanho do vetor: \n");
   scanf("%d", &n);

    for(int i = 0; i < n; i++){
        v[i] = rand();
        printf("v[%d] = %.2f\n", i, v[i]);
    }

    resultado = media(v, n);
    
    printf("a media eh: %.2f", resultado);
    return 0;
}