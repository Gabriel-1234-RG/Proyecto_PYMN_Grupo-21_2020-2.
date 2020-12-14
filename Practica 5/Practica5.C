#include <stdio.h>
#include <math.h>
float PRIF(float x_in);
float SEGF(float x_in);
float ROIV(float k,float j);
float DAT(float r, float y);
float ERR1(float r, float y);
float ERR2(float r, float y);
float y, r, j,k;
int funcion, l, modo;
int main() {
  printf("Por favor insertar el tipo de metodo para la realizacion de la funcion \n");
  printf("1. Biseccion        2. Regla falsa\n");
    scanf("%d",&modo);
  switch (modo) {
    case 1:
    printf("Cantidad de iteraciones\n");
    scanf("%d",&funcion);
    printf("------------------------------------------------------------------" );
    printf("\n");
    r=-3;
    y=-2;
    j=0;
    k=0;
    printf("   i          Xi           a           b             E%\n");
    for(l=1; l<=funcion; l++){
      printf("%d         %f    %f   %f     %f\n",l,DAT(r,y),r,y,ROIV(k,j));
      if ((PRIF(r)*PRIF(DAT(r,y)))<0) {
        y=DAT(r,y);
        k=y;
        j=DAT(r,k);
      }
      else{
        r=DAT(r,y);
        k=r;
        j=DAT(k,y);
      }
      }
    printf("\n");
    printf("------------------------------------------------------------------" );
    printf("\n");
    r=1;
    y=2;
    j=0;
    k=0;
    printf("   i          Xi          a         b            E%\n");
    for(l=1; l<=funcion; l++){
      printf("%d         %f    %f   %f     %f\n",l,DAT(r,y),r,y,ROIV(k,j));
      if ((SEGF(r)*SEGF(DAT(r,y)))<0) {
        y=DAT(r,y);
        k=y;
        j=DAT(r,k);
      }
      else{
        r=DAT(r,y);
        k=r;
        j=DAT(k,y);
      }
      }
    break;
    case 2:
    printf("Cantidad de iteraciones\n");
    scanf("%d",&funcion);
    printf("------------------------------------------------------------------" );
    printf("\n");
    r=-3;
    y=-2;
    j=0;
    k=0;
    printf("   i          Xi           a           b             E%\n");
    for(l=1; l<=funcion; l++){
      printf("%d         %f    %f   %f     %f\n",l,ERR1(r,y),r,y,ROIV(k,j));
      if ((PRIF(r)*PRIF(ERR1(r,y)))<0) {
        y=ERR1(r,y);
        k=y;
        j=ERR1(r,k);
      }
      else{
        r=ERR1(r,y);
        k=r;
        j=ERR1(k,y);
      }
      }
    printf("\n");
    printf("------------------------------------------------------------------" );
    printf("\n");
    r=1;
    y=2;
    j=0;
    k=0;
    printf("   i          Xi          a         b            E%\n");
    for(l=1; l<=funcion; l++){
      printf("%d         %f    %f   %f     %f\n",l,ERR2(r,y),r,y,ROIV(k,j));
      if ((SEGF(r)*SEGF(ERR2(r,y)))<0) {
        y=ERR2(r,y);
        k=y;
        j=ERR2(r,k);
      }
      else{
        r=ERR2(r,y);
        k=r;
        j=ERR2(k,y);
      }
      }
    break;
  }
  }
float PRIF(float x_in){
  float fx;
  fx = (2*(x_in)*cos(2*x_in))-pow((x_in+1),2);
  return fx;
}
float DAT(float r, float y){
  float xi;
  xi = ((r+y)/2);
  return xi;
}
float SEGF(float x_in){
  float fx;
  fx = log(fabs(x_in))+pow(x_in,2)-4;
  return fx;
}
float ROIV(float k,float j){
  float epsilon;
  epsilon = fabs((j-k)/j)*100;
  return epsilon;
}
float ERR1(float r, float y){
  float xi;
  xi = y-((PRIF(y)*(r-y))/(PRIF(r)-PRIF(y)));
  return xi;
}
float ERR2(float r, float y){
  float xi;
  xi = y-((SEGF(y)*(r-y))/(SEGF(r)-SEGF(y)));
  return xi;
}
