#include <stdio.h>
#include <stdlib.h>
#include "Lib.h"
#define CANT_EMPLEADOS 5


int main()
{
    int edad[CANT_EMPLEADOS];
    float salario[CANT_EMPLEADOS],promedio;

    obtenerDatos ( edad, salario,CANT_EMPLEADOS);
    mostrarDatosAlta(edad, salario,CANT_EMPLEADOS);

    calcularPromedio(edad,CANT_EMPLEADOS,&promedio);
    printf("\nPROM: %.2f",promedio);

    //int aux;
    //aux = calcularMaximo(salario,CANT_EMPLEADOS);
    //printf("\nMAX: %d",aux);

    printf("\nMAX: %d",calcularMaximo(salario,CANT_EMPLEADOS));

    //menu

    int opcionMenu = 0, acumuladorBaja;
    while ( opcionMenu != 4)
    {
        int indiceSeleccionado;
        printf("\n\nIngrese la opcion que desea: \nMostrar informacion (1) \nDar de baja(2) \nMostrar dados de baja (3)\nSalir (4)\n");
        scanf ("%d", &opcionMenu);
        switch (opcionMenu)
        {
            case 1:
                {
                    mostrarDatosAlta(edad, salario,CANT_EMPLEADOS);
                    break;
                }

            case 2:
                {
                    printf("Seleccione el numero de indice que quiere dar de baja\n");
                    scanf("%d", &indiceSeleccionado);
                    edad[indiceSeleccionado] = -1;
                    break;
                }
            case 3:
                {
                    mostrarDatosBaja(edad, salario,CANT_EMPLEADOS,&acumuladorBaja);
                    printf("La cantidad de personas dadas de baja es: %d",acumuladorBaja);
                }

        }


    }
return 0;
}
