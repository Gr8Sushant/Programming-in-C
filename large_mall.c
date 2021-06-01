#include<stdio.h>
#include<stdlib.h>
void main()
{
	int n,i,large;
	int *p;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%",(p+i));
	}
	large=*(p+0);
	for(i=1;i<n;i++)
	{
		if(*(p+i)>large)
		{
			large=*(p+1);
		}
	}
	free(p);
	printf("\nThe large element is %D",large);
}
