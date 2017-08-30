#include <stdio.h>
#include <stdlib.h>
#include "Consola.h"

int tomaDeFloat (char mensaje[], float* punteroResultado, float max, float min)
{

    float auxiliar;
    printf("%s",mensaje);
    scanf("%f",&auxiliar);
    if (auxiliar >= min && auxiliar <= max)
    {
        *punteroResultado=auxiliar;
        return 0;
    }
    return -1;

}
