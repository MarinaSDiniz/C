#include <stdio.h>


void change(int *pntr1, int *pntr2){
    int temp;
    
    temp = *pntr1;
    *pntr1 = *pntr2;
    *pntr2 = temp;
}

int main()
{
    int a = 10, b = 20;
    int *pntr1 = &a;
    int *pntr2 = &b;
    
    printf("%d e %d originais\n", a, b);
    change(&a, &b);
    printf("%d e %d trocados", a, b);

    return 0;
}