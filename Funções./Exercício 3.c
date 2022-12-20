#include <stdio.h>

int multiplicação(int n1, int n2)
{
   int soma = 0, contador;

   for (contador = 1; contador <= n1; contador++)   
   {
    soma = soma + n2;
   }

   return (soma);
}

int main ()
{
    float n1, n2, resultado;

    printf ("Insira o 1° número: ");
    scanf ("%f", &n1);
    printf ("Insira o 2° número: ");
    scanf ("%f", &n2);
 
    resultado =multiplicação (n1,n2);
    printf ("\nA soma é %.2f.", resultado);

    printf ("\n\n\n\n\n");
    return 0;
}