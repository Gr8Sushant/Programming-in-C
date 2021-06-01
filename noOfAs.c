#include<stdio.h>
void main()
{
	int j=0,counta=0,length=0,i;
	char ch[100];
	gets(ch);
	while(ch[j]!='\0')
	{
		length++;
		j++;
	}
	for(i=0;i<length;i++)
	{
		if(ch[i]=='a')
		{
			counta++;
		}
	}
	printf("the number of a in the string is %d",counta);
}
