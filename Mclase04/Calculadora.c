#include "Calculadora.h"

/**< esta funcion es privada */
static int funcionPrivada (int a, int b);

/** \brief Divide
 *
 * \param resultado resultado de la di....
 * \param
 * \param
 * \return (0) ok - (-1) Error - (-2) comando desconocido
 *
 */
int calculadora(float* resultadoDivision, float* resultadoSuma, float* resultadoResta, float* resultadoMultiplica, float num1, float num2)
{
    int retorno = -1;
    *resultadoSuma=num1+num2;
    *resultadoResta=num1-num2;
    *resultadoMultiplica=num1*num2;

    if(num2 != 0)
    {
        *resultadoDivision = num1/num2;
        retorno = 0;
    }
    return retorno;
}





int calculadora2(float* resultado, float num1, float num2, char operacion)
{
    int retorno = -1;

    switch(operacion)
    {
        case SUMA:
            *resultado=num1+num2;
            retorno = 0;
            break;
        case RESTA:
            *resultado=num1-num2;
            retorno = 0;
            break;
        case MULTIPLICACION:
            *resultado=num1*num2;
            retorno = 0;
            break;
        case DIVISION:
            if(num2 != 0)
            {
                *resultado = num1/num2;
                retorno = 0;
            }
            break;
        default:
            retorno=-2;


    }

    return retorno;
}

/**< esta funcion solo se puede usar aca porue tiene static, el prototipo va en este archivo, no en el .h */

static int funcionPrivada (int a, int b)
{

    return 8;
}


