#include <stdio.h>

#define MAX 1000

void Fibonacci(int vetor[MAX]){
   vetor[0] = 1;
   vetor[1] = 1;
   
   for(int i = 2; i < MAX; i++){
       vetor[i] = vetor[i - 1] + vetor[i - 2];
   }
}

int main()
{
    int n, vetor[MAX];
    
    Fibonacci(vetor);
    
    do{
    printf("Insira um valor (entre 0 a 1000): ");
    scanf("%d", &n);
    
    printf("fib(%d) = %d\n", n, vetor[n]);
    
}
    while(n > 0);
    return 0;

}