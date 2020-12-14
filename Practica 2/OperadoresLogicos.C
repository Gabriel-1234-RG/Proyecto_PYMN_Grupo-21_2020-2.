#include<stdio.h>
#include<math.h>
   float kg, estm,IMC;


int main(){
  printf("Ingrese su peso en kg\n");
  scanf("%f",&kg);
  printf("Ingrese su estatura en metros\n");
  scanf("%f",&estm);
  IMC = kg/ (pow(estm,2));
  if (IMC<18.5){
  printf("Su peso esta bajo\n");
  }
  if (IMC>=18.5 && IMC<=24.9){
  printf("Su peso esta normal\n");
  }
  if (IMC>=25 && IMC<=29.9){
  printf("Tiene sobrepeso\n");
  }
  if (IMC>=30 && IMC<=34.9){
  printf("Tiene obesidad tipo 1\n");
  }
  if (IMC>=35 && IMC<=39.9)
  {printf("Tiene obesidad tipo 2\n");}
  else if (IMC>40){
  printf("Tiene hiper obesidad\n");
  }
  }
