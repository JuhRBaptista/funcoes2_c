#include <stdio.h>

int função(int número)
{
   int fatorial = 1, contador;

    if (número > 0)
    { 
    for (contador = 1; contador <= número; contador++)
    {
        fatorial = fatorial*contador;
    }
    }
    else
    {
       if (número == 0)
       {
        fatorial = 1;
       }
       else
       {
        fatorial = -1;
       }
    }

    return (fatorial);
}


int main ()
{
    int número, resultado;

    printf ("Insira um número: ");
    scanf ("%d", &número);
 
    resultado = função(número);
    
    printf ("\nFatorial: %d.", resultado);

    printf ("\n\n\n\n\n");
    return 0;
}