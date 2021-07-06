#include <stdio.h>
/*Reto #3 - Rangos cambiantes.
Nuevamente pide a tu usuario que indique 3 números: un límite superior, un límite inferior y uno de comparación. 
Si el número de comparación se encuentra entre los 2 primeros, comunicarlo en pantalla. 
En caso estar por debajo del límite inferior o por arriba del límite superior, también mostrarlo en pantalla.
*/
int supLimit, infLimit, comparison;

int main()
{
    printf("Por favor indicque 3 numeros para un limite superior, un limite inferior y uno de comparacion.\n");
    scanf("%i %i %i", &supLimit, &infLimit, &comparison );

    if (comparison <= supLimit && comparison >= infLimit)
        printf("El numero %i se encuentra entre los rangos de %i y %i ", comparison, supLimit, infLimit);
    else if (comparison < infLimit && infLimit < supLimit)//Rango inferior
        printf("El numero %i es inferior al rango minimo", comparison);
    else if (comparison > supLimit && supLimit > infLimit)//Rango superior
        printf("El numero %i es superior al rango de maximo", comparison);
    else
    printf("Estos numero no concuerdan con lo especificado");

    return 0;
}
