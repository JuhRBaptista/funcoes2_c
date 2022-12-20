#include <stdio.h>

float soma(float n1, float n2, float n3)
{
   float resultado;
   
   resultado = n1 + n2 + n3;

   return (resultado);
}

int main ()
{
    float n1, n2, n3, resultado;

    printf ("Insira o 1° número: ");
    scanf ("%f", &n1);
    printf ("Insira o 2° número: ");
    scanf ("%f", &n2);
    printf ("Insira o 3° número: ");
    scanf ("%f", &n3);
 
    resultado = soma (n1,n2,n3);
    printf ("\nA soma é %.2f.", resultado);

    printf ("\n\n\n\n\n");
    return 0;
}