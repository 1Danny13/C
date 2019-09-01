#include <stdio.h>
#include"math.h"
int main()
{
	double a,b,c,s,area;
	scanf("%lf %lf %lf ",&a,&b,&c );
	s=(a+b+c)/2;
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("a=%.2f,b=%.2f,c=%.2f,s=%.2f\n",a,b,c,s);
	printf("area=%.2f\n",area);
	return 0;
}
