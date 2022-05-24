#include <stdio.h>
#include <math.h>

int main()
{
int idade;

printf("-----CLASSIFICACAO DE ATLETAS-----\n");
printf("QUANTOS ANOS POSSUI O ATLETA:\n");
scanf("%i", &idade);

if (idade>=5 && idade<=7)
{
  printf("ESSE ATLETA E DA CATEGORIA INFANTIL A.");
}
else if (idade>=8 && idade<=10)
{
  printf("ESSE ATLETA E DA CATEGORIA INFANTIL B.");
}
else if (idade>=11 && idade<=13)
{
  printf("ESSE ATLETA E DA CATEGORIA JUVENIL A.");
}
else if (idade>=14 && idade<=17)
{
  printf("ESSE ATLETA E DA CATEGORIA JUVENIL B.");
}
else if (idade>=18 && idade<=25)
{
  printf("ESSE ATLETA E DA CATEGORIA SENIOR.");
}
else
{
  printf("ESSE ATLETA NAO PODE SER CLASSIFICADO");
}



return 0;
}
