#include <stdio.h>
void main()
{
	int i,j;
	int a[2][3];
	int r[2][3];
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
		{
			r[i][j]=a[j][i];
			printf("%d\t",r[i][j]);
		}
		printf("\n");
	}
}
