#include <stdio.h>

int main()
{
    float cel,fah;
    printf("-----CELSIUS PARA FAHRENHEIT-----\n");
    printf("QUAL A TEMPERATURA EM CELSIUS?\n");
    scanf("%f",&cel);
    fah = (cel * 1.8) + 32;
    printf("%f EM FAHRENHEIT E IGUAL A %f.",cel,fah);

    return 0;
}
