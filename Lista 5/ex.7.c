#include <stdio.h>

int main()
{
    int num1, num2;
    int *pt1 = &num1;
    int *pt2 = &num2;
    
    printf("Insira 2 valores: ");
    scanf("%d", &num1);
    scanf("%d", &num2);
    
   if(pt1 > pt2){
        printf("O ponteiro pt1 (num1) tem o maior endereço: %p\n", (void*)pt1);
   } else if(pt2 > pt1){
        printf("O ponteiro pt2 (num2) tem o maior endereço: %p\n", (void*)pt2);
   } else {
        printf("Invalido");
   }

    return 0;
}