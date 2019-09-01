#include <stdio.h>
main( )
{
	float d1,d2;
	char op;
	scanf("%f %c %f",&d1,&op,&d2);
	switch(op)
	{ case '+':
		  printf("%.2f+%.2f=%.2f\n",d1,d2,d1+d2);break;
	  case'-':
	      printf("%.2f-%.2f=%.2f\n",d1,d2,d1+d2);break;
	  case'*':
	      printf("%.2f*%.2f=%.2f\n",d1,d2,d1+d2);break;
	  case'/':
	  if(d2==0)
	  printf("division by zero.\n");
	  else
	  printf("%.2f/%.2f=%.2f",d1,d2,d1+d2);break;	  	  	  
	}
	
}
