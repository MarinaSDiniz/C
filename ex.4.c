#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    int eleitores, vBranco, vNulo, vValido;
    float p_vb, p_vn, p_vV;

    setlocale(LC_ALL, "Portuguese");

    printf("insira o n° de eleitores: \n");
    printf("insira o n° de votos brancos: \n");
    printf("insira o n° de votos nulos: \n");
    printf("insira o n° de votos validos: \n");
    scanf("%d %d %d %d",&eleitores,&vBranco, &vNulo, &vValido);

    p_vb = ((float)vBranco/eleitores)*100;
    p_vn = ((float)vNulo/eleitores)*100;
    p_vV = ((float)vValido/eleitores)*100;

    printf("eleitores: %d\tVotos brancos: %.2f\tVotos nulos: %.2f\tVotos válidos: %.2f\n", eleitores, p_vb, p_vn, p_vV);


    return 0;
}