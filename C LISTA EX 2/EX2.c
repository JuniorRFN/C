#include <stdio.h>
#include <math.h>

int main()
{
int usuario,senha;
printf("-----LOGIN-----\n");
printf("USUARIO:\n");
scanf("%i",&usuario);

if (usuario==675483)
    {
    printf("SENHA:");
    scanf("%i",&senha);
    if (senha==67453)
        {
        printf("BEM-VINDO");
        }
    else
        {
        printf("SENHA INCORRETA");
        }
    }
else if (usuario==145627)
    {
    printf("SENHA:");
    scanf("%i",&senha);
    if (senha==89234)
        {
        printf("BEM-VINDO");
        }
    else
        {
        printf("SENHA INCORRETA");
        }
    }
else if (usuario==98782)
    {
    printf("SENHA:");
    scanf("%i",&senha);
    if (senha==89132)
        {
        printf("BEM-VINDO");
        }
    else
        {
        printf("SENHA INCORRETA");
        }
    }

else
{
    printf("USUARIO INCORRETO");
}


return 0;
}
