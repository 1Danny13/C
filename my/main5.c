#include <stdio.h>
int main( )
{
	int age, money;
	printf("pleasr,input you year");
	scanf("%d",&age);
	money=(age<=12?20:age>70?0:80);
	printf("your pick%d\n",money);
	return 0;
}
