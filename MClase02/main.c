#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main()
{
   int numeroIngresado;
   int acumuladorNumerosIngresados=0;
   int max = INT_MIN;
   int min = INT_MAX;
   char respuestaUsuario='s';
   int contador=0;

   while (respuestaUsuario=='s')
   {
       contador++;
       printf("Ingrese un numero\n");
       scanf("%d",&numeroIngresado);

       acumuladorNumerosIngresados += numeroIngresado;

       if (numeroIngresado>max)
       {
           max=numeroIngresado;
       }
       if (numeroIngresado<min)
       {
           min=numeroIngresado;
       }

       printf("¿Desea seguir ingresando numeros (s/n)?\n");
       fflush(stdin);           //para borrar lo anterior y evitar errores
       scanf("%c", &respuestaUsuario);

   }

      float promedio = acumuladorNumerosIngresados /(float)contador ;
      printf("El promedio de los numeros es %.2f.\n", promedio );
      printf("El valor maximo ingresado es %d.\n", max);
      printf("El valor minimo ingresado es %d.\n", min);

      return 0;

}
