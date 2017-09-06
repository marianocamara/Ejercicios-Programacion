#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    char seguir='s';
    int opcion=0;
    float numeroUno = 0, numeroDos = 0;
    float resultadoDivision;



    while(seguir=='s')
    {
        printf("\nElija una de las opciones del menu:\n\n");
        printf("1- Ingresar 1er operando (A = %.2f)\n",numeroUno);
        printf("2- Ingresar 2do operando (B = %.2f )\n",numeroDos);
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operaciones\n");
        printf("9- Salir\n\n\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                numeroUno = obtenerFloat ("\nIngrese el primer numero: ");
                break;
            case 2:
                numeroDos = obtenerFloat ("\nIngrese el segundo numero: ");
                break;
            case 3:
                printf("\nEl resultado de la suma es %.2f\n", sumaDeNumeros (numeroUno, numeroDos));
                break;
            case 4:
                 printf("\nEl resultado de la resta es %.2f\n", restaDeNumeros (numeroUno, numeroDos));
                break;
            case 5:
                if (divisionDeNumeros (numeroUno, numeroDos, &resultadoDivision) != -1)
                {
                    printf("\nEl resultado de la division es %.2f\n", resultadoDivision);
                }
                else
                {
                    printf("\nERROR No se puede dividir por 0. Ingrese otro numero.\n");
                }
                break;
            case 6:
                printf("\nEl resultado de la multiplicacion es %.2f\n", multiplicacionDeNumeros (numeroUno, numeroDos));
                break;
            case 7:
                printf("El factorial es %.2f\n", factorialDeUnNumero ( numeroUno));
                break;
            case 8:
                printf("\nEl resultado de la suma es %.2f\n", sumaDeNumeros (numeroUno, numeroDos));
                printf("El resultado de la resta es %.2f\n", restaDeNumeros (numeroUno, numeroDos));
                if (divisionDeNumeros (numeroUno, numeroDos, &resultadoDivision) != -1)
                {
                    printf("El resultado de la division es %.2f\n", resultadoDivision);
                }
                else
                {
                    printf("ERROR No se puede dividir por 0. Ingrese otro numero.\n");
                }
                printf("El resultado de la multiplicacion es %.2f\n", multiplicacionDeNumeros (numeroUno, numeroDos));
                printf("El factorial de %.2f es %.2f\n", numeroUno, factorialDeUnNumero ( numeroUno));
                break;
            case 9:
                seguir = 'n';
                break;
            default:
                printf("\nIngrese una opcion valida\n");
        }

    }
    return 0;
}
