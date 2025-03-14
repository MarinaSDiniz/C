#include <stdio.h>

int main() {
    int inicio, termino, duracao;
    
    printf("Hora de inicio: ");
    scanf("%d", &inicio);
    printf("Hora de termino: ");
    scanf("%d", &termino);
    
    if(termino > inicio){
        duracao = termino - inicio;
    } else if(termino < inicio){
        duracao = (24 - inicio) + termino;
    } else {
        duracao = 24;
    }
    
    printf("O jogo durou %d hora(s).\n", duracao);
    
    return 0;
}
