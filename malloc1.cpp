#include<stdio.h>
#include<stdlib.h>
void main()
{
	int n,i;
	scanf("%d",&n);
	int *p=(int*)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	{
		scanf("%d",p+i);
	}
	for(i=0;1<n;i++)
	{
		print("%d",*(p+i));
	}
	free(p);
}
