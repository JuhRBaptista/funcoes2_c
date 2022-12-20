#include <stdio.h>

int função(int número)
{
   int primo = 1, contador;

   for (contador = 2; contador < número; contador++)
   {
   if (número % contador == 0)
   {
    primo = 0;
   }
   }

   return (primo);
}

int main ()
{
    int número, resultado;

    printf ("Insira um número: ");
    scanf ("%d", &número);
 
    resultado = função(número);
    
    if (resultado == 1)
    {
        printf ("Esse número é primo.");
    }
    else
    {
        printf ("Esse número não é primo.");
    }

    printf ("\n\n\n\n\n");
    return 0;
}