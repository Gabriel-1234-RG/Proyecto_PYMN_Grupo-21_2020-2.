#include <stdio.h>
float w, m, gravitatoria=9.8;
int main()
{
    printf ("Valor de Masa:");
    scanf ("%f",&m);
    w=m*gravitatoria;
    printf("La fuerza de atraccion de esa persona es: %9.8f", w);
}
