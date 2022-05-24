#include <stdio.h>
#include <math.h>

int main()
{
float raio,area,perimetro;
    printf("-----CIRCULO-----\n");
    printf("QUAL O RAIO DO CIRCULO?(EM CM)\n");
    scanf("%f",&raio);
    area=3.14*(pow(raio,2));
    perimetro=2*3.14*raio;
    printf("O PERIMETRO DESSE CIRCULO E %f CM E A AREA E %f CM",perimetro,area);


    return 0;
}
