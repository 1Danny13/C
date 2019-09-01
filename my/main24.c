#include <stdio.h>
#include"time.h"
int main( )
{
	char ch;
	int n=0;
	time_t t1,t2;
	time(&t1);
	while((ch=getchar())!='#')
	n++;
	time(&t2);
	printf("\n%d",n);
	printf("\n%.2f/s",1.0*n/(t2-t1));
	return 0;
}
