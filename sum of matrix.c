#include <stdio.h>
void main()
{
	int i,j,s=0;
	int a[2][3];
	for(j=0;j<3;j++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			s=s+a[i][j];
		}
		printf("\nthe sum is %d",s);
	}
}
