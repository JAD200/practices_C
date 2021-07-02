#include <stdio.h>
/*Reto #2 - En el rango, por favor.
Pide al usuario que indique 2 números: uno que servirá como límite y otro para comparar. 
Si el segundo número es menor al primero, mostrarás un mensaje diciendo “El número ‘x’ se encuentra en el rango, gracias”
y en caso contrario dirá “El número ‘x’ excede el límite permitido”.*/

int num1, num2;

int main()
{
    printf("Por favor ingrese dos numeros \n");
    scanf("%i %i", &num1, &num2);

    if (num1 > num2)
        printf("El numero %i se encuentra en el rango, gracias", num2);
    else
        printf("El numero %i excede el limite permitido", num2);
    

    return 0;
}
