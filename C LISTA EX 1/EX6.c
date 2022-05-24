#include <stdio.h>
#include <math.h>

int main()
{
    float cel,fah;
    printf("-----FAHRENHEIT PARA CELSIUS-----\n");
    printf("QUAL A TEMPERATURA EM FAHRENHEIT?\n");
    scanf("%f",&fah);
    cel=(fah-32) * 5/9;
    printf("%f EM CELSIUS E IGUAL A %f.",fah,cel);

    return 0;
}
