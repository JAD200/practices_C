#include <stdio.h>
#include <time.h>

int edad;
int tiempo = 1;
char name[20];

int main()
{
    printf("Buenas, por favor ingresa tu nombre y tu edad: ");
    scanf("%s %i", &name, &edad);

    int pasado = edad - tiempo;
    int futuro = tiempo + edad;

    printf("%s el año pasado tenias %i años y el proximo año cumpliras %i años", name, pasado, futuro);
    return 0;
}
