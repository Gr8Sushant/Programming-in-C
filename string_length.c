#include<stdio.h>
void main()
{
	int i=0,count=0;
	char ch[100];
	gets(ch);
	while(ch[i]!='\0')
	{
		count++;
		i++;
	}
	printf("the size is %d",count);
}
