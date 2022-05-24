#include <stdio.h>
#include <math.h>

int main()
{
    float a,b;
    printf("-----TROCA DE VALORES-----\n");
    printf("DE UM VALOR PARA 'A':\n");
    scanf("%f",&a);
    printf("DE UM VALOR PARA 'B':\n");
    scanf("%f",&b);
    float c = a, d=b;
    b=c;
    a=d;
    printf("AGORA O VALOR DE 'A' E %f E O DE 'B' E %f",a,b);



    return 0;
}
