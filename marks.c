#include<stdio.h>

void main()
{
	int a;
	printf("Enter your Marks");
	scanf("%d",&a);
	
	if(a>80)
	{
		printf("Distinction");
	}
	else if(a>69)
	{
		printf("First Division");
	}
	else if(a>59)
	{
		printf("Second Division");
	}
	else if(a>44)
	{
		printf("Third Division");
	}
	else 
	{
		printf("Fail");
	}
}
		
