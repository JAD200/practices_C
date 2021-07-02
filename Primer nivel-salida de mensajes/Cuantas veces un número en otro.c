#include <stdio.h>

int maxNum, minNum;

int main()
{   
    printf("Por favor ingresa un numero mayor a 1000 y otro menor a 100.\n");
    scanf("%i %i",&maxNum, &minNum);

    if (maxNum > 1000 && minNum < 100)
    {
        int divition = maxNum / minNum;
        printf("El numero %i entra %i veces en el numero %i",minNum, divition, maxNum);
    }
    else
    printf("Los numero ingresados no corresponden al enunciado.");

    return 0;
}
