#include <stdio.h>

float nombre, ed, pe, IMC, est;
int main()
{
    printf("ingrese nombre por favor:");
    scanf ("%f",&nombre);
    printf("ingrese edad por favor:");
    scanf("%f",&ed);
    printf("ingrese peso en kg por favor :");
    scanf("%f",&pe);
    printf("ingrese estatura por favor:");
    scanf("%f",&est);

    IMC=pe/est*est;

    printf("la masa corporal de esa persona es:%9.8f",IMC );

  }
