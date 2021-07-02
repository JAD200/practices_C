#include <stdio.h>
int rebanadas, consumo;
;

int main()
{
    printf("Hola, imagina que llegas a una fiesta con rebanadas de pizza. Cuantas llevarias? ");
    scanf("%i", &rebanadas);

    printf("\ny cuantos pedazos comerias? ");
    scanf("%i", &consumo);

    if (rebanadas == 0)
        printf("Nadie podria comer por que no llevaste pizza :C");
    else
    {
        rebanadas -= consumo;
        printf("Entonces quedarian %i pedazos de pizza.", rebanadas);
    }
    
    return 0;
}
