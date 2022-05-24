#include <stdio.h>
#include <math.h>

int main()
{
    float altura, peso, imc;
    printf("-----INDICE DE MASSA CORPORAL-----\n");
    printf("QUAL SUA ALTURA?(EM METROS)\n");
    scanf("%f",&altura);
    printf("QUAL SEU PESO?(EM QUILOS)\n");
    scanf("%f",&peso);
    imc=peso/(pow(altura,2));
    printf("PROCESSANDO...\n");
    printf("O SEU IMC E IGUAL A %f",imc);

    return 0;
}
