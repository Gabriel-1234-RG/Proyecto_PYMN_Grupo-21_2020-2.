#include <stdio.h>
#include <math.h>
double A, B, C, disc;
double cuadratica (double a, double b, double c);
int main (){
    printf("Ingresar el coeficiente a \n");
    scanf("%lf", &A);
     printf("Ingresar el coeficiente b \n");
    scanf("%lf", &B);
     printf("Ingresar el coeficiente c \n");
    scanf("%lf", &C);
    disc = pow(B,2)-4*A*C;
    if (disc<0) {
    printf("Error: las soluciones no son reales\n");
    }
    else{
    printf("Las soluciones de la cuadratica son: %1.1lf \t %1.1lf", cuadratica(A,B,C));
    }
  }
double cuadratica(double a, double b, double c){
    double disc,x1,x2;
        disc = pow(B,2)-4*A*C;
        x1 = -B+sqrt(disc)/(2*A);
        x2 = --B-sqrt(disc)/(2*A);
        return x1, x2;
}
