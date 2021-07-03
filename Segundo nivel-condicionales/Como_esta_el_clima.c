#include <stdio.h>
#include <string.h>
/*
Reto #5 - ¿Cómo está el clima?
Crea un programa que pregunte al usuario si está lloviendo, en caso de responder “sí” pregunta si está haciendo mucho viento y si responde “sí” nuevamente muestra un mensaje indicando que hace mucho viento para salir con una sombrilla. 
En caso contrario, anima al usuario a que lleve una sombrilla.
 Para el caso de responder “no” en la primer pregunta, entonces solo desea un bonito día.
Considera que las respuestas pueden pasarse a minúsculas para evitar posibles errores.
*/
char answer[3];

int main()
{
    printf("Esta lloviendo?\n");
    scanf("%s", answer);
    if (strcmp(answer, "si") == 0 || strcmp(answer, "Si") == 0)
    {
    printf("Y esta haciendo mucho viento?\n");
    scanf("%s", answer);
    if ((strcmp(answer, "si") == 0 || strcmp(answer, "Si") == 0))
        printf("Hace mucho viento para llevar sombrilla");
    else 
        printf("Por favor lleve sombrilla :D");
    }
    else if (strcmp(answer, "no") == 0 || strcmp(answer, "No") == 0)
        printf("\tEntonces que tenga un bonito dia :D\n");
    else
        printf("Por favor escriba si o no. \n");

    return 0;
}
