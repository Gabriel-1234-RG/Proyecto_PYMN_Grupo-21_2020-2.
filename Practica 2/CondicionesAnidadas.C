#include <stdio.h>
int main()
{
    int ing;
    char EC;
    float impuestos, tarifafinal;
    printf("\n¿Estado civl de la persona?:  1 = Soltero o 2 = Casado: ");
    scanf("%c",&EC);
    printf("\n¿Ingreso mensual: ");
    scanf("%d",&ing);
    if (EC=='2')
    {
        if ( ing<64000)
        {
         impuestos=0.10;
        }
        else
        {
         impuestos=0.25;
        }
    }
    if (EC=='1')
    {
        if (ing>32000)
        {
           impuestos=0.25;
        }
        else
        {
           impuestos=0.10;
        }
   }
   tarifafinal= ing*impuestos;
   printf("\nEstado civil de esta persona es: %c",EC);
   printf("\nSu ingreso es de: %d",ing);
   printf("\nCantidad de porcentaje de impuesto aplicado es de: %.2f",impuestos);
   printf("\nLa tarifa final de impuestos es de: %.2f");
           return 0;
 }
 
