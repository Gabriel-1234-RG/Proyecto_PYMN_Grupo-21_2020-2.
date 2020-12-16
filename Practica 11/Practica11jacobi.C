#include <stdio.h>
#include<math.h>
float A[3][3] = {{10,2,-1},{-3,-6,2},{1,1,5}};
float b[3] = {27,-61.5,-21.5};
float Ter1,Ter2,Ter3,it1,it2,it3;
float iteracion1,iteracion2,iteracion3;
int po;
int main()
{

for(po=0;po<5;po++){
    if(po==0){
        iteracion1 = b[0]/A[0][0];
        iteracion2 = b[1]/A[1][1];
        iteracion3 = b[2]/A[2][2];
        printf("Jacobi\n" );
        printf("x_1 En la iteracion 1 es: %f\n",iteracion1);
        printf("x_2 En la iteracion 1 es: %f\n",iteracion2);
        printf("x_3 En la iteracion 1 es: %f\n",iteracion3);
    }
    else {
        it1 = iteracion1;
        iteracion1 = ((-A[0][1]*iteracion2)-(A[0][2]*iteracion3)+b[0])/A[0][0];
        Ter1=fabs((iteracion1-it1)/(iteracion1))*100;
        it2 = iteracion2;
        iteracion2 = ((-A[1][0]*it1)-(A[1][2]*iteracion3)+b[1])/A[1][1];
        Ter2=fabs((iteracion2-it2)/(iteracion2))*100;
        it3 = iteracion3;
        iteracion3 = ((-A[2][0]*it1)-(A[2][1]*it2)+b[2])/A[2][2];
        it3=fabs((iteracion3-it3)/(iteracion3))*100;
        printf("x_1 en la iteracion %d es  %f, Con un porcentaje de error de %f %%\n",po+1,iteracion1,Ter1);
        printf("x_2 en la iteracion %d es  %f, Con un porcentaje de error de %f %%\n",po+1,iteracion2,Ter2);
        printf("x_3 en la iteracion %d es  %f, Con un porcentaje de error de %f %%\n",po+1,iteracion3,Ter3);
        }
    }
}
