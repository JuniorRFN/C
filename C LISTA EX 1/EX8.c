#include <stdio.h>
#include <math.h>

int main()
{
   int dias,salario_base;
   float imposto,resultado;
   printf("-----SALARIO ENCANADOR-----\n");
   printf("QUAL A QUANTIDADE DE DIAS TRABALHADOS?\n");
   scanf("%i",&dias);
   salario_base=dias*30;
   imposto=salario_base*0.08;
   resultado=salario_base-imposto;
   printf("O SALARIO FINAL E %f",resultado);

    return 0;
}
