#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    float x1, x2, y1, y2, distancia;

    setlocale(LC_ALL, "Portuguese");

    printf("informe x1 e x2: ");
    scanf("%f %f",&x1, &x2);
    printf("informe y1 e y2: ");
    scanf("%f %f",&y1, &y2);
    
    distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    
    printf("distância Euclidiana entre os pontos informados é de: %f", distancia);

    return 0;
}