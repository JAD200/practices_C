#include<stdio.h>

int personas;
float cuenta, propina, totalPorPersona, totalAPagar;
float impuestos = 2.5;

int main()
{
    printf("Por favor indica el total a pagar y entre cuantas personas dividiran la cuenta\n");
    scanf("%f %i", &cuenta, &personas);
    printf("Cuanto quieren pagar de propina?\n");
    scanf("%f", &propina);
    /*Cuentas
    dinero mas propina*/
    cuenta += + propina;
    //Porcentaje de impuestos
    impuestos = impuestos * cuenta / 100;
    totalAPagar = cuenta + impuestos;
    //Division enter personas
    totalPorPersona = totalAPagar / personas;
    //Impresion
    printf("El total a pgar es %.2f$ mas %.2f$ de impuestos\n", totalAPagar, impuestos);
    printf("Y este es el total a pagar por persona %.2f", totalPorPersona);
    return 0;
}