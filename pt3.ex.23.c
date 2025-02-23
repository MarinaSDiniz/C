#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    
    int n = 780000, g1, g2, g3;
    
    g1 = 780000 * 0.46;
    g2 = 780000 * 0.32;
    g3 = 780000 * 0.22;
    
    printf("1º ganhador: R$%d. 2º ganhador: R$%d. 3º ganhador: %d.", g1, g2, g3);

    return 0;
}