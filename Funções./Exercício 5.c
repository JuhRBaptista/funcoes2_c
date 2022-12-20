#include <stdio.h>

int função(int x, int y)
{
   int divisível = 0;

   if (x % y == 0)
   {
    divisível = 1;
   }

   return (divisível);
}

int main ()
{
    int x, y, resultado;

    printf ("Insira um valor para X: ");
    scanf ("%d", &x);
    printf ("Insira um valor para Y: ");
    scanf ("%d", &y);
 
    resultado = função(x,y);
    
    if (resultado == 1)
    {
        printf ("X é divisível por Y.");
    }
    else
    {
        printf ("X  não é divisível por Y.");
    }

    printf ("\n\n\n\n\n");
    return 0;
}