#include <stdio.h>
int main( )
{
	int n,t,result=1;
	scanf("%d",&n);
	t=n;
	if(n>0)
	{	do
		{result*=n;
			n--;
		}
		while(n);
	}
	printf("%d!=%d\n",t,result);
}
