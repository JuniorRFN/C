#include <stdio.h>
#include <math.h>

int main()
{
    int a,b;
    float conta_maluca;
    printf("-----CONTA MALUCA-----\n");
    printf("Escolha um numero:\n");
    scanf("%i",&a);
    printf("Escolha um segundo numero:\n");
    scanf("%i",&b);
    conta_maluca=(pow(b,3)+a*b)-2*b+a%b;
    printf("f(x)=%f",conta_maluca);



    return 0;
}
