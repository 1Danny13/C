#include <stdio.h>
main()
{
	int count,num,total;
	count=0;
	total=0;
	while(count<10)
	{
		count++;
		printf("enter the no.%d=",count);
		scanf("%d",&num);
		total+=num;
	}
	printf("Average=%d\n",total/10);
	
}
