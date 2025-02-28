#include<stdio.h>

int main(){

    float a,b;
    int n;
    
    printf("escolha um n°: ");
    scanf("%f", &a);
    printf("escolha um n°: ");
    scanf("%f", &b);
    
    printf("\nMenu\n 1.somar \n 2.subtrair \n 3.multiplicar \n 4.dividir\n");
    printf("escolha uma opção: ");
    scanf("%d", &n);
    
    switch (n){
    
        case 1:
            printf("%2.f", a+b);
        break;
        case 2:
            printf("%2.f", a-b);
        break;
        case 3:
            printf("%2.f", a*b);
        break;
        case 4:
            printf("%f", a/b);
        break;
        default:
            return 0;
    }
}