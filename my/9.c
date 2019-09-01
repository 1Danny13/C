#include <stdio.h>
#include "math.h"
 int main()
 {
 	double r,p, n,x,y,b,s;
 	printf("please input r,p,n\n");
 	scanf("%lf %lf %lf",&r,&p,&n);
 	x=0.01*r;
 	y=n-1;
 	b=pow(x,y);
 	s=p*b;
 	printf("%.2f,%.2f,%.2f,%.2f",x,y,b,s);
 	return 0;
 	
 }
 
