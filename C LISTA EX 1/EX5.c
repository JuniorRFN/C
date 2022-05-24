#include <stdio.h>
#include <math.h>

int main()
{
    float cat_o,cat_a,hip;
    printf("-----DESCOBRIR HIPOTENUSA-----\n");
    printf("QUAL O VALOR DOS CATETOS DESSE TRIANGULO RETANGULO? (EM CM)\n");
    scanf("%f %f",&cat_a,&cat_o);
    hip=sqrt(pow(cat_a,2)+pow(cat_o,2));
    printf("HIPOTENUSA IGUAL A %f CM",hip);

    return 0;
}
