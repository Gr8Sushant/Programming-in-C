#include<stdio.h>

void swap(int *a, int*b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}

void main()
{
	int a=5,b=10;
	printf("%d %d",a,b);
	swap(&a,&b);
	printf("\nAfter swap: %d, %d",a,b);

}
