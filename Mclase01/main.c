#include <stdio.h>
#include <stdlib.h>
#define CANTIDAD_NUMEROS 5

int main()
{

int cantidadNegativos=0;
int numero;
int i;
int acumuladorPositivos=0;
int acumuladorNegativos=0;

for (i=0;i<CANTIDAD_NUMEROS;i++)
{
    printf("Ingrese un numero:\n");
    scanf("%d",&numero);

    if (numero<0)
    {
       cantidadNegativos++;
       acumuladorNegativos+=numero;
    }
    else
    {
        acumuladorPositivos+=numero;
    }
}
    int cantidadPositivos=CANTIDAD_NUMEROS - cantidadNegativos;

    printf("La cantidad de negativos es %d, y la cantidad de positivos es %d. \n", cantidadNegativos, cantidadPositivos );
    if (cantidadPositivos!=0)
    {
         printf("El promedio de los numeros positivos es %.2f." , acumuladorPositivos / (float)cantidadPositivos);
    }
    if (cantidadNegativos!=0)
    {
        printf("El promedio de los numeros negativos es %.2f.", acumuladorNegativos / (float)cantidadNegativos);
    }


    return 0;
}
