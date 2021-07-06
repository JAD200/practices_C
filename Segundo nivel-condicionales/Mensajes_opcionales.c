#include <stdio.h>
/*
Reto #7 - Mensajes opcionales
Crearás un un script para el que el usuario indicará un número entre 1 y 6. Como respuesta se le brindará un mensaje según el número leido:
1 - “Hoy aprenderemos sobre prorgamación”
2 - “¿Qué tal tomar un curso de marketing digital?
3 - “Hoy es un gran día para comenzar a aprender de diseño”
4 - ¿Y si aprendemos algo de negocios online?
5 - “Veamos un par de clases sobre producción audiovisual”
6 - “Tal vez sea bueno desarrollar una habilidad blanda en Platzi”
En caso indicar un número distinto, pedir al usuario que ingrese uno en el rango válido.
*/
int choice;

int main()
{
    do
    {
        printf("Por favor indique un choiceero del 1 al 6\n");
        scanf("%i", &choice);      
        switch (choice)
        {
        case 1:
            printf("Hoy aprenderemos sobre prorgamaci%cn", 162);
            break;
        case 2:
            printf("%cQu%c tal tomar un curso de marketing digital?", 168, 130);
            break;
        case 3:
            printf("Hoy es un gran d%ca para comenzar a aprender de dise%co", 161, 164);
            break;
        case 4:
            printf("%cY si aprendemos algo de negocios online?", 168);
            break;
        case 5:
            printf("Veamos un par de clases sobre producci%cn audiovisual", 162);
            break;
        case 6:
            printf("Tal vez sea bueno desarrollar una habilidad blanda en Platzi");
            break;
        default:
            printf("Ese choiceero es incorecto. ");
            break;
        }
    }while (choice < 1 || choice > 6);
    
    return 0;
}
