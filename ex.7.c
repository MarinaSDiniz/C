#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, d = 1; /*declaração de variáveis*/
    
    a = -2; /*a recebe -2*/
    b = a * a; /*b faz ((-2) * (-2)) = 4*/
    c = d++; /* c recebe o valor atual de d (1), depois d é incrementado para 2 */
    d = c++ + 5; /* d recebe o valor atual de c (1) + 5 → d = 6, depois c é incrementado para 2 */
    d = ++c + 5; /* c é primeiro incrementado para 3, depois d recebe 3 + 5 → d = 8 */
    
    printf ("%d %d %d %d", a, b, c, d); /*exibe os valores finais das variáveis*/

    return 0;
}