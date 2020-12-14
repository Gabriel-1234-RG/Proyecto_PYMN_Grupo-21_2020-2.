#include "stdio.h"
double K,I,a=0,b=1,c=1,reo;
int main (){
    printf("Numero de iteraciones\n");
    scanf("%lf", &K);
    printf("1, ");
    for (I=1;I<K;I++){
     c=a+b;
     a=b;
     b=c;
     printf("%1.01f , ", c);
    }
    reo=c/a;
    printf("Numero de aureo es: %1f\n  ", reo);
    return 0;
    }
