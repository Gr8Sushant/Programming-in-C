#include <stdio.h>
void main()
{
	int a[7]={12,18,20,89,75,48,96,23,47,15};
	int i,element;
	char ch='n';
	printf("Enter the element to be search");
	scanf("%d",&element);
	for(i-0;i<7;i++)
	{
		if(a[i]==element)
		{
			ch='y';
			break;
		}
	}
	if(ch=='y')
	{
		printf("element found");
	}
	else
	{
		printf("element not found");
	}
}
