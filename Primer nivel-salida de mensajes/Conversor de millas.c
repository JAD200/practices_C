#include <stdio.h>

float cantMillas, kilometros;
//hay 1.609344 km en una milla (mi)
int main()
{
    printf("Por favor ingresa una cantidad de millas\n");
    scanf("%f", &cantMillas);

    kilometros = cantMillas * 1.609344 / 1;

    printf("La cantidad de %.2fmi es igual a %.2fkm", cantMillas, kilometros);
    return 0;
}
