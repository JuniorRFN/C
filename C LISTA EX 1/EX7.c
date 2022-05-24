#include <stdio.h>

int main()
{
    float salario,gratificacao,imposto;

    printf("-----SALARIO-----\n");
    printf("QUAL O VALOR DO SEU SALARIO?\n");
    scanf("%f",&salario);
    gratificacao=salario*(0.05);
    imposto=salario*(0.07);
    salario=salario+gratificacao-imposto;
    printf("O SALARIO FINAL E %f",salario);


    return 0;
}
