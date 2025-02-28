#include<stdio.h>

int main(){

    int n;
    
    printf("Ínsira sua idade: ");
    scanf("%d", &n);
    
    if ( n > 0 && n <= 12){
        printf("criança ");
    } else if ( n > 12 && n <= 17){
        printf("adolescente");
    } else if (n > 17 && n <= 59) {
        printf("adulto");
    } else if (n > 60) {
        printf("idoso");
    }
    return 0;
}