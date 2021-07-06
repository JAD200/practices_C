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

int main()
{
    printf("Cual es tu animal favorito? ");
    scanf("%s", &animal);
    //los singulares de tortuga
    if (strcmp(animal, "tortuga") == 0)
        printf("Tambien me gustan las tortugas\n");
    else if (strcmp(animal, "Tortuga") == 0)
        printf("Tambien me gustan las tortugas\n");
    else if (strcmp(animal, "TORTUGA") == 0)
        printf("Tambien me gustan las tortugas\n");
    //los plurales de tortuga      
    else if (strcmp(animal, "tortugas") == 0)
        printf("Tambien me gustan las tortugas\n");
    else if (strcmp(animal, "Tortugas") == 0)
        printf("Tambien me gustan las tortugas\n");
    else if (strcmp(animal, "TORTUGAS") == 0)
        printf("Tambien me gustan las tortugas\n");
    else
        printf("Ese animal es genial, pero prefiero las tortugas\n");

    return 0;
}
