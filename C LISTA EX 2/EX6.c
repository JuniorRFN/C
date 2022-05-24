#include <stdio.h>
#include <math.h>

int main()
{
float salariohora,horas,extra,dependentes,sliquido,sbruto;

printf("-----COTACAO DE SALARIO-----\n");
printf("DIGITE O SALARIO DO EMPREGADO POR HORA TRABALHADA (REAIS):\n");
scanf("%f",&salariohora);
printf("DIGITE O NUMERO DE HORAS TRABALHADAS:\n");
scanf("%f",&horas);
printf("DIGITE O NUMERO DE HORAS EXTRAS TRABALHADAS:\n");
scanf("%f",&extra);
printf("DIGITE O NUMERO DE DEPENDENTES:\n");
scanf("%f",&dependentes);
sbruto = salariohora*horas + salariohora*extra + dependentes*128;

if(sbruto>=1434.6 && sbruto<=2150)
{
  sliquido=sbruto-(sbruto*7.5/100);
}
else if(sbruto>=2150.01 && sbruto<=2866.7)
{
  sliquido=sbruto-(sbruto*15/100);
}
else if(sbruto>=2866.71 && sbruto<=3582)
{
  sliquido=sbruto-(sbruto*22.5/100);
}
else if(sbruto>3582)
{
  sliquido=sbruto-(sbruto*27.5/100);
}
else
{
  sliquido=sbruto;
}
if(sliquido<=500)
{
  sliquido+=180;
}
else if (sliquido>500 && sliquido<1000)
{
  sliquido+=120;
}
else
{
  sliquido+=100;
}
printf("O SALARIO FINAL E %f",sliquido);

return 0;
}
