#include <stdio.h>

int num1, num2, diference;

int main()
{
    printf("Por favor ingrese dos numeros :D\n");
    scanf("%i %i",&num1, &num2);

    if (num1 < num2)
    {
        diference = num2 - num1;
        printf("El numero %i es mayor que %i, ", num2, num1);
        printf("Por una diferencia de %i.", diference);
    }
    else if(num1 > num2)
    {
        diference = num1 - num2;
        printf("El numero %i es mayor que %i, ", num1, num2);
        printf("Por una diferencia de %i.", diference);
    }
    else
        printf("Esos numeros son iguales");

    return 0;
}
