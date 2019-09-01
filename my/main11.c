#include <stdio.h>
main( )
{
	float a,b,c;
	scanf("%f %f %f",&a,&b,&c);
	if(a+b>c&&a-b<c)
	{
		if(a==b&&b==c)
		printf("equilateral triangle");
		else
		{
			if(a==b||a==c||b==c)
			printf("isoceles triangle");
			else
			printf("triangle");
		}
	}
	else
	printf("non-triangle");
}

