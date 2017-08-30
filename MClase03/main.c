#include <stdio.h>
#include <stdlib.h>

int operacionDeNumeros (float* resultadoDivision,float* resultadoSuma, float* resultadoResta, float* resultadoMultiplicacion, float numeroUno, float numeroDos );

int main()
{
    float numeroUno;
    float numeroDos;
    float resultadoDivision;
    float resultadoSuma;
    float resultadoResta;
    float resultadoMultiplicacion;

    printf("Ingrese el primer numero:\n");
    scanf("%f",&numeroUno);
    printf("Ingrese el primer numero:\n");
    scanf("%f",&numeroDos);

    if (operacionDeNumeros(&resultadoDivision, &resultadoSuma, &resultadoResta, &resultadoMultiplicacion,numeroUno,numeroDos)==-1)
    {
        printf("ERROR. No se puede dividir por 0\n");
    }
    else
    {
        printf("El resultado de la division es %.2f\n", resultadoDivision);
    }

    printf ("El resultado de la suma es %.2f\n",resultadoSuma);
    printf ("El resultado de la resta es %.2f\n",resultadoResta);
    printf ("El resultado de la multiplicacion es %.2f\n",resultadoMultiplicacion);

    return 0;
}
/** \brief suma,resta, multiplica y divide dos numeros
 *
 * \param numero uno
 * \param numero dos
 * \return -1 error, 0 ok
 *
 */

int operacionDeNumeros (float* resultadoDivision,float* resultadoSuma, float* resultadoResta, float* resultadoMultiplicacion, float numeroUno, float numeroDos )
{
    int retorno = -1;
    if (numeroDos != 0)
    {
        *resultadoDivision = numeroUno/numeroDos;
        retorno = 0;
    }

    *resultadoSuma = numeroUno + numeroDos;
    *resultadoResta = numeroUno - numeroDos;
    *resultadoMultiplicacion = numeroUno * numeroDos;

    return retorno;
}

