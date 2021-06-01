#include <stdio.h>
void main()
{
	int a[5]={7,13,3,19,8};
	int i,j,temp;
	for(i=0;i<5-1;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(a[j]>a[i])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}	
	}
	for(i=0;i<5;i++)
	{
		printf("%d\t",a[i]);
	}
}
