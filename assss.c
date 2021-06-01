#include<stdio.h>

void main()
{
	int a,b,c;
	printf("Enter Value for A B and C");
	scanf("%d %d %d",&a,&b,&c);
	
	if(a>b && a>c)
	{
		printf("A is Greatest of them all");
	}
	else if(b>c)
	{
		printf("B is Greatest of them all");
	}
	else
	{
		printf("C is Greatest of them all");
	}
}
		
		


