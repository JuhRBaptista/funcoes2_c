#include <stdio.h>

float função(float número)
{
   char valor;
   
   if (número > 0)
   {
    valor = 'P';
   }
   else
   {
    valor = 'N';
   }
   return (valor);
}

int main ()
{
    float número;
    char valor;

    printf ("Insira um número número: ");
    scanf ("%f", &número);
 
    valor = função(número);
    printf ("\n%c.", valor);

    printf ("\n\n\n\n\n");
    return 0;
}