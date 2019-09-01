#include <stdio.h>
main( )
{   int money;
    float rate,total;
	printf("please input money\n");
	scanf("%d",&money);
	switch(money)
	{
		case 3500:rate=0.00357;break;
		case 4000:rate=0.00438;break;
		case 4500:rate=0.00556;break;
		case 5000:rate=0.00650;break;
		case 6000:rate=0.00792;break;
		case 8000:rate=0.01031;break;
		case 10000:rate=0.01225;break;
		case 15000:rate=0.01483;break;
		case 20000:rate=0.01613;break;
		case 30000:rate=0.01875;break;
		case 38600:rate=0.02014;break;
		case 40000:rate=0.02031;break;
		case 50000:rate=0.02205;break;
		case 60000:rate=0.02338;break;
		case 70000:rate=0.02489;break;
		case 80000:rate=0.02616;break;
		case 90000:rate=0.02758;break;
		case 100000:rate=0.02883;break;

	}
	total=money*rate;
	printf("%f",total);
}
