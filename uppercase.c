#include<stdio.h>

void change (char *c)
{
	if(*c>=65&&*c<=90)
	{
		*c=*c+32;
	}
}

void main()
{
	char ch='Z';
	printf("Given character: %c\n",ch);
	change(&ch);
	printf("Lower case character: %c",ch);
}
