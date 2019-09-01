#include <stdio.h>
main( )
{
	int year;
	float total,money,rate;
	printf("please input money,year\n");
	scanf("%f %d",&money,&year);
	switch(year)
	{
		case 1:rate=0.01;break;
		case 2:rate=0.02;break;
		case 3:rate=0.03;break;
		case 5:rate=0.05;break;
		case 8:rate=0.08;break;
		default :rate=0;break;
	}
	total=money+year*rate*12*money;
	printf("%.2f",total);
}
