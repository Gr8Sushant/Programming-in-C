#include<stdio.h>

void main()
{
	int i=0, length=0, a=0,j=0; 
	char ch[100];
	gets(ch);
	while (ch[i]!='\0')
	{
		i++;
		length++;
	}
	for(j=0;j<length;j++)
	{
		if(ch[j]=='a')
		{
		a++;
		}
	}
	printf("The number of a word are: %d", a);
}
