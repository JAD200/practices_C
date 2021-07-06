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
int error; 

int main()
{
    do
    {
        printf("%cEsta lloviendo?\n", 168);
        scanf("%s", answer);
        if (strcmp(answer, "si") == 0 || strcmp(answer, "Si") == 0)
        {
            printf("%cY esta haciendo mucho viento?\n", 168);
            scanf("%s", answer);
            if ((strcmp(answer, "si") == 0 || strcmp(answer, "Si") == 0))
            {
                printf("Hace mucho viento para llevar sombrilla");
                error = 0;
            }
            else if (strcmp(answer, "no") == 0 || strcmp(answer, "No") == 0)
            {
                printf("Por favor lleve sombrilla :D");
                error = 0;
            }
            else
            printf("Por favor escriba si o no. \n");        
        }
        else if (strcmp(answer, "no") == 0 || strcmp(answer, "No") == 0)
        {
            printf("\tEntonces que tenga un bonito d%ca :D\n", 161);
            error = 0;
        }
        else
            printf("Por favor escriba si o no. \n");

    } while (error != 0);
    
   
    return 0;
}
