#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int Vectorarre (int *arlo, int p);
int vectorele (int*arlo,int p);
int rale(int *arlo, int p);
int reimp(int *arlo, int p);
int operare (int *arlo, int p);
int facop(int*arlo,int p);
int nummatri(int glo[][100],int u, int w);
int rematriz(int glo[][100], int u, int w);
int maz(int glo[][100],int u, int cuadr);
int primerdato(int glo[][100],int sn, int qf);
int segundodato(int pro[][100],int lo, int de);
int resultadoma(int ko[][100], int sn, int qf);
int finaleje(int ko[][100],int sn, int qf);
int glo[100][100],pro[100][100],ko[100][100];
int variable,lo,qf,de,w,u,x,p,y,sn;
int suma=0;
int re1[100], re2[100], re3 [100],re4[100];
int main(){
  printf ("Indique que tipo de problema es :\n");
  scanf("%d",&variable);
switch (variable){
  case 1:
  printf(" Tamaño de los arreglos\n");
  scanf("%d",&p);
  printf("Numeros del arreglo 1 (%d): \n",p);
  Vectorarre (re1,p);
  printf("Numeros del arreglo 2 (%d): \n",p);
  Vectorarre (re2,p);
  printf("Primer arreglo: \n");
  vectorele (re1,p);
  printf("Segundo arreglo: \n");
  vectorele (re2,p);
  break;
  case 2:
  printf("Indique el tamano de los arreglos por favor\n");
  scanf("%d",&p);
  printf("Primer arreglo: \n");
  reimp(re1,p);
  printf("Segundo arreglo: \n");
  reimp(re2,p);
  break;
  case 3:
  printf("Indique el tamano de los arreglos por favor\n");
  scanf("%d",&p);
  printf("Valores del primer arreglo (%d): \n",p);
  Vectorarre (re1,p);
  printf("Valores del segundo arreglo (%d): \n",p);
  Vectorarre (re2,p);
  printf ("El resultado de la suma de los arreglos vectoriales seria: \n");
  operare (re3,p);
  break;
  case 4:
  printf("Indique el tamano de los arreglos por favor\n");
  scanf("%d",&p);
  printf("Valores del primer arreglo (%d): \n",p);
  Vectorarre (re1,p);
  printf ("El resultado de la suma del arreglo  seria :  ");
  facop (re4,p);
  printf("\n");
  break;
  case 5:
  printf("Indique numero de filas por favor\n");
  scanf("%d",&u);
  printf("Indique numero de columnas por favor\n");
  scanf("%d",&w);
  nummatri(glo,u,w);
  printf("\n" );
  printf("Matriz completada\n");
  rematriz(glo,u,w);
  printf("\n");
  break;
  case 6:
  printf("Indique numero de filas por favor\n");
  scanf("%d",&u);
  printf("Indique numero de columnas por favor\n");
  scanf("%d",&w);
  maz(glo,u,w);
  printf("\n");
 break;
 case 7:
 printf("Cantidad de filas de la matriz 1\n");
 scanf("%d",&sn);
 printf("Cantidad de columnas de la matriz 1\n");
 scanf("%d",&qf);

 printf("Cantidad de filas de la matriz 2\n");
 scanf("%d",&lo);
 printf("Cantidad de columnas de la matriz 2\n");
 scanf("%d",&de);
 if (sn==lo && qf==de) {
   printf(" Primera matriz\n");
   primerdato(glo,sn,qf);
   printf("Segunda matriz\n");
   segundodato(ko,lo,de);
   printf(" Resultado final de la matriz seria: \n");
   resultadoma(ko,sn,qf);
   printf("\n");
 } else {
   printf("Los datos no corresponden\n");
}
break;
case 8:
printf("Cantidad de filas de la matriz 1\n");
scanf("%d",&sn);
printf("Cantidad de columnas de la matriz 1\n");
scanf("%d",&qf);

printf("Cantidad de filas de la matriz 2\n");
scanf("%d",&lo);
printf("Cantidad de columnas de la matriz 2\n");
scanf("%d",&de);
if (sn==de) {
  printf(" Primera matriz\n");
  primerdato(glo,sn,qf);
  printf("Segunda matriz\n");
  segundodato(pro,lo,de);
  printf(" El resultado de la multiplicacion seria: \n");
  finaleje(ko,sn,qf);
  printf("\n");
} else {
  printf("Los datos no corresponden\n");
}
break;
}
return 0;
}
int Vectorarre (int*arlo,int p){
  for (y=1;y<=p;y++){
   printf ("Cantidad [%d] ",y);
   scanf ("%d",&arlo[y]);
}
   printf("\n");
}
int vectorele (int*arlo,int p){
  for (y=1;y<=p;y++){
    printf("Lugar [%d] %d\n",y,arlo [y]);
  }
  }
  int rale(int *arlo, int p){
    int y;
    for(y=1; y<=p; y++){
    arlo[y]=1+rand()%100;
    }
  }
  int reimp(int *arlo, int p){
    int y;
    for(y=1; y<=p; y++){
    rale(arlo,p);
    printf("Lugar [%d]: %d\n",y,arlo[y]);
    }
  }
  int operare (int*arlo,int p){
    for (y=1;y<=p;y++){
    arlo[y]=re1[y]+re2[y];
     printf ("El resultado de la suma seria[%d]:%d\n",y,arlo[y]);
   }
  }
  int facop(int*arlo,int p){
  for (x=1; x<=p ;x++){
    suma=suma+re1[x];

  }
    printf("%d",suma);
  }
  int nummatri(int glo[][100], int u, int w){
    for(x=1; x<=u; x++)
      for(y=1; y<=w; y++){
      printf("Posicion [%d][%d] => ",x,y);
      scanf("%d",&glo[x][y]);
    }
  }
  int rematriz (int glo[][100], int u, int w){
    for(x=1; x<=u; x++){
      printf("\n");
      for(y=1; y<=w; y++)
      printf(" %d",glo[x][y]);
      printf("\n");
    }
  }
  int maz(int glo[][100], int u, int w){
    for(x=1; x<=u; x++){
      printf("\n");
      for(y=1; y<=w; y++){
      glo[x][y]=1+rand()%100;
      printf(" %d",glo[x][y]);
    }
  }
  }
  int primerdato(int glo[][100], int sn, int qf){
    for(x=1; x<=sn; x++)
      for(y=1; y<=qf; y++){
      printf("Posicion [%d][%d] => ",x,y);
      scanf("%d",&glo[x][y]);
    }
  }
  int segundodato(int pro[][100], int lo, int de){
    for(x=1; x<=lo; x++)
      for(y=1; y<=de; y++){
      printf("Posicion [%d][%d] => ",x,y);
      scanf("%d",&pro[x][y]);
    }
  }
  int resultadoma(int ko[][100], int sn, int qf){
    for(x=1; x<=sn; x++)
    for(y=1; y<=qf; y++)
    ko[x][y]=glo[x][y]+ko[x][y];
    for(x=1; x<=sn; x++){
      printf("\n");
      for(y=1; y<=de; y++)
      printf(" %d", ko[x][y]);
      printf ("\n");
    }
  }
  int finaleje(int ko[][100], int sn, int qf){
    int x,y,acumulador,contador;
    for(x=1; x<=sn; x++)
    for(y=1; y<=qf; y++){
    for(acumulador=0, contador=0; contador<=qf; contador++)
    acumulador=acumulador+glo[x][contador]*pro[contador][y];
    ko[x][y]=acumulador;
  }
  for(x=1; x<=sn;x++){
    printf("\n");
  for(y=1; y<=lo;y++)
  printf("  %d",ko[x][y]);
  }
}
