#include <stdio.h>
#include"math.h"
main( )
{   float a,b,c,d,x1,x2,q,m,n;
    printf("please input a,b,c\n");
    scanf("%f %f %f",&a,&b,&c);
    d=b*b-4*a*c;
    if(d>=0)
   {q=sqrt(d);
	x1=(-b+q)/(2*a);
	x2=(-b-q)/(2*a);
	printf("d=%.2f,x1=%.2f,x2=%.2f\n",d,x1,x2);}

    else
	{m=-b/(2*a);
	n=sqrt(-d)/(2*a);
	printf("d=%.2f,x1=%.2f+%.2fi",d,m,n);
	printf("x2=%.2f-%.2fi",m,n);}

}          
