#include <stdio.h>

int main()
{
    int n1, n2, temp;
    
    printf("Insira 2 valores: ");
    scanf("%d  %d", &n1, &n2);
    
    if(n1 < n2){
        temp = n1;
    } else {
        temp = n2;
    }
    
    for(int i = 2; i < temp; i++){
        if(n1 % i == 0 && n2 % i == 0){
            printf("1");
        } else {
            printf("0");
        }
    }

    return 0;
}