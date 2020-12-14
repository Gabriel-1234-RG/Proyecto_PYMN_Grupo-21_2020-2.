#include <stdio.h>
#include <conio.h>
int main()
{
int B,N,Valo,n2=0;
int binario[50];
binario[0]=0;
 printf("Ingrese Numero para la secuencia:  " );
scanf("%lu",&Valo);
for (N=0;N<50;N++) {
binario[N]=Valo%2;
Valo=Valo/2;
if(Valo==0)
break;
}
for(B=N;B>=0;B--) {
printf("%d",binario[B]);
}
getch();
}
