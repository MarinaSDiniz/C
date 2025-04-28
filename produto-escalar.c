#include <stdio.h>

#define MAX 100

float produtoEscalar(float u[], float v[], int n){
    float produto = 0.0;
    
    for(int i = 0; i < n; i++){
        produto += u[i] * v[i];
    }
    return produto;
}

int main(){
    int n;
    float u[MAX], v[MAX], resultado;

    printf("Insira o numero de elementos dos vetores(n < 100): \n");
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++){
        u[i] = 6.0;
        v[i] = 2.0;
    }
    
    resultado = produtoEscalar(u, v, n);
    
    printf("O produto escalar dos vetores u e v eh: %.2f\n",resultado);
    
    return 0;
}