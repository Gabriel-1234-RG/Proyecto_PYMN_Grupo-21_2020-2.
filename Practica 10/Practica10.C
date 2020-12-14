#include <stdio.h>
#include <math.h>
float ki,lo;
float Adelante(float ki, float lo);
float Centrada(float ki, float lo);
float Atras(float ki, float lo);
float Porcentajeerror(float derivada);
int main() {
  printf("Incremento h  Diferenciacion      Resultado f'(xi)        E_r         \n");
  printf("--------------------------------------------------------------");
  ki=0.5;
  lo=0.6;
  printf("\n    0.5      Adelante           %f          %f         \n",Adelante(ki,lo),Porcentajeerror(Adelante(ki,lo)));
  printf("    0.5       Atras            %f          %f         \n",Atras(ki,lo),Porcentajeerror(Atras(ki,lo)));
  printf("    0.5      Centrada           %f          %f         \n",Centrada(ki,lo),Porcentajeerror(Centrada(ki,lo)));
  printf("--------------------------------------------------------------");
  ki=0.2;
  lo=0.6;
  printf("\n    0.2      Adelante           %f          %f         \n",Adelante(ki,lo),Porcentajeerror(Adelante(ki,lo)));
  printf("    0.2       Atras             %f          %f         \n",Atras(ki,lo),Porcentajeerror(Atras(ki,lo)));
  printf("    0.2      Centrada            %f          %f         \n",Centrada(ki,lo),Porcentajeerror(Centrada(ki,lo)));
  printf("--------------------------------------------------------------");
  ki=0.1;
  lo=0.6;
  printf("\n    0.1      Adelante           %f          %f         \n",Adelante(ki,lo),Porcentajeerror(Adelante(ki,lo)));
  printf("    0.1       Atras             %f          %f         \n",Atras(ki,lo),Porcentajeerror(Atras(ki,lo)));
  printf("    0.1      Centrada            %f          %f         \n",Centrada(ki,lo),Porcentajeerror(Centrada(ki,lo)));
  printf("--------------------------------------------------------------");
  ki=0.01;
  lo=0.6;
  printf("\n    0.01     Adelante           %f          %f         \n",Adelante(ki,lo),Porcentajeerror(Adelante(ki,lo)));
  printf("    0.01      Atras             %f          %f         \n",Atras(ki,lo),Porcentajeerror(Atras(ki,lo)));
  printf("    0.01     Centrada            %f          %f         \n",Centrada(ki,lo),Porcentajeerror(Centrada(ki,lo)));
  printf("--------------------------------------------------------------");
  return 0;
}
float Adelante(float ki, float lo){
  float derivada,ft,xi,der;
  ft = 1-exp(-lo/0.2);
  xi = 1-exp(-(lo+ki)/0.2);
  der = 1-exp(-(lo+2*ki)/0.2);
  derivada = (-der+4*xi-3*ft)/(2*ki);
  return derivada;
}
float Atras(float ki, float lo){
  float derivada,ft,xi,der;
  ft = 1-exp(-lo/0.2);
  xi = 1-exp(-(lo-ki)/0.2);
  der = 1-exp(-(lo-2*ki)/0.2);
  derivada = (3*ft-4*xi+der)/(2*ki);
  return derivada;
}
float Centrada(float ki, float lo){
  float derivada,xi,der,ti,fun;
  xi = 1-exp(-(lo+ki)/0.2);
  der = 1-exp(-(lo+2*ki)/0.2);
  ti = 1-exp(-(lo-ki)/0.2);
  fun = 1-exp(-(lo-2*ki)/0.2);
  derivada = (-der+8*xi-8*ti+fun)/(12*ki);
  return derivada;
}
float Porcentajeerror(float derivada){
  float Porerr;
  Porerr = fabs((derivada-0.24893)/derivada)*100;
  return Porerr;
}
