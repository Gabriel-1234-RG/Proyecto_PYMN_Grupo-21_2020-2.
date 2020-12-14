#include <stdio.h>
#include <math.h>

float funcion1(float op)
{
return -8*sin(op)*exp(-op)+8*cos(op)*exp(-op);
}
float funcion2(float op)
{
  return 2*op*op*op -11*op*op+17.7*op-5;
}

float ret(float op)
{
    return 6*op*op-22*op+17.7;
}

float errorabsoluto(float x1,float x0)
{
    float j;

    j= (x1-x0)/x1;

    if (j<0)
      j=-j;

    return j*100;
}
void NewtonRaphson()
{
    float x0,x1;
    int r=0,prof;
    float j;
    x0=0.3;
    printf("Usted ha elegido  el Metodo de NewtonRaphson\n");
    printf("Numero maximo de iteraciones \n");
printf("-------------------------------------------");
    scanf("%d",&prof);
    printf(" i     xi          e%\n");
    printf(" %d     %f \n",r,x0);
    while  (r<prof)
    {
        x1=x0-funcion2(x0)/ret(x0);

        j=errorabsoluto(x1,x0);
        r=r+1;
        printf(" %d     %f  %f \n",r,x1,j);
        x0=x1;
    }
}
void Metodosecante()
{
    float x0,x1,x2;
    float j;
    int prof,r=0;
    float y;
    x0=3;
    x1=-4;
    printf ("Usted ha elegido el Metodo de la secante\n");
    printf("Numero maximo de iteraciones \n");
    printf("---------------------------------------------------------------");
    scanf("%d",&prof);
    printf("i    xi      xi+1       f'(xi)     e%\n");
      printf("%d %f  %f   \n",0,x0,x1);

     while (r<prof)
     {
         y= (funcion2(x0)-funcion2(x1))/(x0-x1);

        x2=x1-funcion2(x1)*(x0-x1)/(funcion2(x0)-funcion2(x1));

        j=errorabsoluto(x2,x1);
        r=r+1;
        printf("%d %f  %f   %f  %f \n",r,x1,x2,y,j);

        x0=x1;
        x1=x2;
     }
}
int main()
{
  int opcion;
  printf("1. Metodo de NewtonRaphson    2. Metodo de la Secante \n");
  printf("Que opcion\n");
  scanf("%d",&opcion );
  switch (opcion) {
    case 1:
    NewtonRaphson();
    break;
  case 2:
   Metodosecante();
   break;
 }
    return 0;
}
