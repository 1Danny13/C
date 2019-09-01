#include <stdio.h>
#include "math.h"
main( )
{   int hour,min;
    float a,b,c,d,x,y,z,e;
	printf("please input hour and min\n");
	scanf("%d %d",&hour,&min);
 a=hour*5;
	 b=min-a;
	 c=abs(b);
	 d=c*6;
	 x=min*6;
	 y=x/12;
	 z=d-y;
 if (0<hour&&hour<=12&&(0<=min&&min<=59)&&z<=180)
	 printf("%d,%d,%.5f",hour,min,z);
    else if(0<hour&&hour<=12&&(0<=min&&min<=59)&&z>180)
     {
		 e=180-(z-180);
     
         printf("%d,%d,%.5f",hour,min,e);
     }
         else
         printf("misinput");
             
          
	
}
