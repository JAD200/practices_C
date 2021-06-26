#include <stdio.h>

int cantidadDias;
int horas = 24;
int minutos = 1440;
int segundos = 86400;
//1dia-->24hs-->1440min-->86400seg
int main()
{
    printf("Por favro coloca una cantidad de dias \n");
    scanf("%d", &cantidadDias);

    horas = horas * cantidadDias;
    minutos *= cantidadDias;
    segundos *= cantidadDias;

    printf("En %i dias hay %i horas con %i minutos y %i segundos", cantidadDias, horas, minutos ,segundos);
    return 0;
}
