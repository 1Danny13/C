#include <stdio.h>
main( )
{
	int x;
	printf("please input\n");
	scanf("%d",&x);
	if (((-1<=x&&x<=100)||(200<=x&&x<=210))&&(x%2!=0)&&(x>0))
	printf("%d",x);
	else
	printf(" that is not odd");
	
}
