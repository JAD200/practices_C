#include <stdio.h>

char nombre[20];
char apellido[20];

//Hola mundo solo con nombre
/*
int main(){
    printf("Cual es tu nombre?\t");
    scanf("%s", &nombre);
    
    printf("Hola, %s. Un gusto saludarte :D\n", nombre);

    return 0;
}
*/

//Hola mundo con nombre y apellido.

int main(){
    printf("Cual es tu nombre?\t");
    scanf("%s", &nombre);

    printf("y cual es tu apellido?\t");
    scanf("%s%s", &apellido);

    printf("Hola, %s %s. Un gusto saludarte :D\n", nombre, apellido);

    return 0;
}
