#include <stdio.h>
/*
Reto #6 - Edad permitida
Pide al usuario que ingrese su edad y mostrarás un mensaje correspondiente si esta coincide con las siguientes condiciones:
Más de 30 años: Nunca es tarde para aprender ¿Qué curso tomaremos?
Entre 29 y 18 años: Es un momento excelente para impulsar tu carrera.
Menos de 18 años: ¿Sabes hacia dónde dirigir tu futuro? Seguro puedo ayudarte.
*/
int edad;

int main()
{
    printf("Por favor ingrese su edad: ");
    scanf("%i", &edad);

    if (edad >= 30)
        printf("Nunca es tarde para aprender, %cQue curso tomaremos?",168);
    else if (edad <= 29 && edad >=18)
        printf("Es un momento excelente para impulsar tu carrera.");
    else
        printf("%cSabes hacia donde dirigir tu futuro? Seguro puedo ayudarte.",168);

    return 0;
}
