#include <stdio.h>
#include <string.h>
/*
Reto #4 - “I like turtles”
Escribe un programa que pida al usuario ingrese su animal favorito,
si coloca ‘Tortuga’, ‘tortuga’, ‘TORTUGA’ 
o cualquier otra variante de la palabra entonces mostrar en pantalla “También me gustan las tortugas”. 
En caso contrario mostrar el mensaje “Ese animal es genial, pero prefiero las tortugas”.
*/

char animal[30];
char tortuga[6][8] ={"tortuga","Tortuga","TORTUGA","tortugas", "Tortugas", "TORTUGAS"};


int main()
{
    printf("Cual es tu animal favorito? ");
    scanf("%s", &animal);
    
    if (strcmp(animal, tortuga) == 0)
        printf("Tambien me gustan las tortugas\n");
    else
        printf("Ese animal es genial, pero prefiero las tortugas\n");

    return 0;
}
