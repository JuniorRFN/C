#include <stdio.h>
#include <math.h>

int main()
{
int a,b,c,d,e;
a=((2>7)&&(9<3)); //FALSO
b=((4<3)||(6>2)); //VERDADEIRO
c=((1==2)||(2>1))&&(2<5); //VERDADEIRO
d=(3!=3)&&((5>10)||(4>=4)); //FALSO
e=!((2<=3)&&(5>=1)); //FALSO
printf("%i\n%i\n%i\n%i\n%i",a,b,c,d,e);


return 0;
}
