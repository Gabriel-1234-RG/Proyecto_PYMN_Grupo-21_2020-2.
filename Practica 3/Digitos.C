#include<stdio.h>
int o,t,h,k,g,w,v,z;
int main (){
    do{
printf("Número de 4 cifras con dígitos no repetidos\n");
scanf("%d",&o);
h=o%10;
t=o-h;
t=t%100;
k=t/10;
w=o-k-h;
w=w%1000;
g=w/100;
z=o-g-k-h;
v=z/1000;
}
while (o<999 && o>10000);
if (k!=h && k!=v && h!=v && h!=g && g!=k && g!=v){
    printf(" Codigo valido \n");
    printf("\n");
}
else{
    printf("Codigo no valido\n");
    return 0;
}
}
