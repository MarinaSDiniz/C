#include<stdio.h>

int main(){

    int ano;
    
    printf("Ínsira um ano: ");
    scanf("%d", &ano);
    
    if (ano % 400 == 0 || ano % 4 == 0){
        printf("ano e bissexto");
    } else {
        printf("não eh bissexto");
    }
    return 0;
}