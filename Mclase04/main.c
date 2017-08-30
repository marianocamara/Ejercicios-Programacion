#include <stdio.h>
#include <stdlib.h>
#include "Calculadora.h"
#include "Consola.h"

int main()
{
    float rSuma,rResta,rMulti,rDivision,y,x;
    printf("Ingrese el primer numero :\n");
    scanf("%f",&x);
    printf("Ingrese el segundo numero : \n");
    scanf("%f",&y);

    if(calculadora(&rDivision,&rSuma,&rResta,&rMulti,x,y)== -1)
    {
        printf("Error. No se puede dividir por 0");
    }
    else
    {
        printf("La division es : %.2f",rDivision);
    }
    printf("\nLa suma es: %.2f", rSuma);
    printf("\nLa resta es: %.2f",rResta);
    printf("\nLa multiplicacion es %.2f", rMulti);


    //****************************************************
    calculadora2(&rDivision,x,y,DIVISION);
    printf("\n\n\nLa division es : %.2f",rDivision);

    calculadora2(&rSuma,x,y,SUMA);
    printf("\nLa suma es : %.2f\n\n\n",rSuma);

    float max = 100;
    float min = -100;

    if (tomaDeFloat ("Ingrese un numero\n", &x, max,  min)==-1)
    {
        printf("\nError");
    }
    if (tomaDeFloat ("Ingrese otro numero\n", &y, max,  min)==-1)
    {
        printf("\nError");
    }

    if(calculadora(&rDivision,&rSuma,&rResta,&rMulti,x,y)== -1)
    {
        printf("\nError. No se puede dividir por 0");
    }
    else
    {
        printf("\nLa division es : %.2f",rDivision);
    }
    printf("\nLa suma es: %.2f", rSuma);
    printf("\nLa resta es: %.2f",rResta);
    printf("\nLa multiplicacion es %.2f", rMulti);





    return 0;
}


