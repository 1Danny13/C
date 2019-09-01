#include <stdio.h>
main()
{
  float a,b,c;
  scanf("%f %f %f",&a,&b,&c);
  if(a>b)
  {
  	if(c>a)
  	printf("%f,%f,%f",c,a,b);
  	else if(c>b)
  	printf("%f %f %f",a,c,b);
  	else
  	printf("%f %f %f",a,b,c);
  	
  }
  else
  {
  	if(c<a)
  	printf("%f %f %f",b,a,c);
  	else if(c<b)
  	printf("%f %f %f",b,c,a);
  	else
  	printf("%f %f %f",c,b,a);
  }
  
}
