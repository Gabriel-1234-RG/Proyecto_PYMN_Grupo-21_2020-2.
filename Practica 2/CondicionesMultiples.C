#include <stdio.h>
int Bolsas;
float  gaco, ptd, preciototal,cp;
char Depa;
int main() {
  printf("1)Perfumeria");

  printf("2)salchichoneria");

  printf("3) carniceria");

  printf ("4)limpieza\n");;

  printf("Departamento en donde se realizo la compra\n");
  scanf("%s",&Depa);
  printf("Total de gasto de su compra\n");
  scanf("%f",&gaco);
  printf("Numero de bolsas utilizadas\n");
  scanf("%d",&Bolsas);
  switch (Depa) {
    case '1':
    ptd = gaco * 0.2;
    cp = Bolsas * 0.1;
    preciototal = gaco - ptd + cp;
    printf("El total de compra es de %0.2f\n",preciototal);
    break;
    case '2':
   ptd = gaco * 0.4;
    cp = Bolsas * 0.1;
    preciototal = gaco - ptd + cp;
    printf("El total de compra es de %0.2f\n",preciototal);
    break;
    case '3':
    ptd = gaco * 0.2;
    cp = Bolsas * 0.1;
    preciototal = gaco - ptd + cp;
    printf("El total de compra es de %0.2f\n",preciototal);
    break;
    case '4':
    ptd = gaco * 0.35;
    cp = Bolsas * 0.1;
    preciototal = gaco - ptd + cp;
    printf("El total de compra es de %0.2f\n",preciototal);
    break;
    default:
    printf("mal\n");
    break;
  }
  return 0;
}
