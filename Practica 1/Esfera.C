#include <stdio.h>
float Volumen, rade, pi=3.1416;
int main()
{
  printf("Presentar el valor del radio  :" );
  scanf("%f",&rade );
  Volumen= 4*rade*rade*rade*pi/3;
  printf("El volumen de la esfera es:  %2.3f", Volumen );
}
