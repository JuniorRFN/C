#include <stdio.h>
#include <math.h>

int main()
{
int x,hx,gx,fx;

printf("-----CALCULO DE F(X)-----\n");
printf("QUAL O VALOR DE X:\n");
scanf("%i", &x);
hx=pow(x,2)+(3*x)-20;
if(hx>5)
{
  gx=hx;
}
else if(hx<=5)
{
  gx=5;
}
if(gx<=10)
{
  fx=10;
}
else if(gx>10)
{
  fx=x+(2*(pow(x,2)));
}
printf("f(x)=%i\n",fx);

return 0;
}
