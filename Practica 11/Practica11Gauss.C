#include<stdio.h>
#include<math.h>
#define X 2
main()
{
    float x[X][X+1],a[X], po, its,w,t,o;
    int de,in,u,xm;
    for(de=0;de<X;de++) a[de]=0;
    puts(" Indique los valores de la matriz\n");
    for(de=0;de<X;de++)
    {
    for(in=0;in<X+1;in++)
    {
    scanf("%f",&x[de][in]);
    }
    }
    printf("Numero maximo de iteraciones: ");
    scanf("%f%d",&po,&xm);
    printf("Iteracion\tx[1]\tx[2]\n");
    for(u=1;u<=xm;u++)
    {
        its=0;
        for(de=0;de<X;de++)
        {
            t=0;
            for(in=0;in<X;in++)
            if(in!=de) t+=x[de][in]*a[in];
            w=(x[de][X]-t)/x[de][de];
            o=fabs(a[de]-w);
            a[de]=w;
        }
        printf(" %5d\t",u);
        for(de=0;de<X;de++)
        printf(" %9.4f\t",a[de]);
        printf("\n");
        if(its<po)
        {
            printf(" Resultado %3d iteracion\n", u);
            for(de=0;de<X;de++)
            printf("a[%3d]=%7.4f\n", de+1,a[de]);
            return 0;
        }

        }
    }
