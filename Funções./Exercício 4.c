#include <stdio.h>

int função(int número)
{
   int soma = 0, contador, númeroPerfeito = 0;
   
   for (contador = 1; contador < número; contador ++)
   {
      if ( número % contador == 0)
      {
        soma = soma + contador;
      }
      printf ("%d", soma);
   }
   return (soma);
}

int main ()
{
    int número, resultado;

    printf ("Insira um número: ");
    scanf ("%d", &número);
    
    resultado = função(número);

    if (resultado == número)
    {
       printf ("Esse é um número perfeito.");
    }
    else
    {
        printf ("Esse não é um número perfeito.");
    }

    printf ("\n\n\n\n\n");
    return 0;
}