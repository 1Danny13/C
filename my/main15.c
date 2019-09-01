#include <stdio.h>
main( )
{
printf("please input money and year\n");
   int year;
   float money,total,rate;
	scanf("%f %d",&money,&year);
	if(year==1) rate=0.05;
	  else if(year==2) rate=0.08;
	     else if(year==3) rate=0.1;
		    else if(year==5) rate=0.15;
			   else if (year==8) rate=0.2;
			     else rate=0;
	total=money+money*rate*12*year;
	printf("%f",total);			  
}
