#include <stdio.h> 
#include <math.h>
int main() 
{
	void add(int Arr1[], int Arr2[]);
	void multiply(int Arr1[], int Arr2[]);
	int Array1[9], Array2[7],*add,*multiply;
	add = add(Array1, Array2);
	multiply = multiply(Array1, Array2);
	while (*add)
	{
		printf("%.5d", *add++);
	}
	while (*multiply)
	{
		printf("%.5f", *multiply++);
	}
	return 0;
} 
void add(int Arr1[], int Arr2[])
{
	int *p1, *p2, *p3, *head;
	int i = 0;
	for (; )
}
