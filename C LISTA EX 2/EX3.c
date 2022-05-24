#include <stdio.h>
#include <math.h>

int main()
{
int numeros, contador=0;

printf("-----CONTADOR DE PARES E IMPARES-----\n");
printf("DIGITE O PRIMEIRO NUMERO:\n");
scanf("%i", &numeros);
if (numeros%2==0)
{
  contador+=1;
}
printf("DIGITE O SEGUNDO NUMERO:\n");
scanf("%i", &numeros);
if (numeros%2==0)
{
  contador+=1;
}
printf("DIGITE O TERCEIRO NUMERO:\n");
scanf("%i", &numeros);
if (numeros%2==0)
{
  contador+=1;
}
printf("DIGITE O QUARTO NUMERO:\n");
scanf("%i", &numeros);
if (numeros%2==0)
{
  contador+=1;
}
printf("DIGITE O QUINTO NUMERO:\n");
scanf("%i", &numeros);
if (numeros%2==0)
{
  contador+=1;
}
printf("EXISTEM %i NUMEROS PARES E %i NUMEROS IMPARES.",contador,5-contador);

return 0;
}
