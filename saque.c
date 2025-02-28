#include <stdio.h>
#include <stdlib.h>

int main(){

    int saque, cem = 0, cinquenta = 0, vinte = 0, dez = 0, dois = 0, um = 0;

    printf("digite o valor do saque: ");
    scanf("%d", &saque);
    
    
 while(saque != 0){
    if (saque >= 100){
       cem = cem + 1;
       saque = saque - 100;
           printf("existem %d notas de 100\n", cem);

    } else if (saque >= 50) {
        cinquenta = cinquenta + 1;
        saque = saque - 50;
            printf("existem %d notas de 50\n", cinquenta);
    } else if (saque >= 20) {
        vinte = vinte + 1;
        saque = saque - 20;
            printf("existem %d notas de 20\n", vinte);
    } else if (saque >= 10) {
        dez = dez + 1;
        saque = saque - 10;
            printf("existem %d notas de 10\n", dez);
    } else if (saque >= 2) {
        dois = dois + 1;
        saque = saque - 2;
            printf("existem %d notas de 2\n", dois);
    } else if (saque >= 1) {
        um = um + 1;
        saque = saque - 1;
            printf("existem %d notas de 1\n", um);
    }
}
  return 0;
}