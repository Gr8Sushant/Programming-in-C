#include<stdio.h>
void change(char *c)
{
	if(*c>=65&&*c<=90)
	{
		*c=*c+32;	
	}	
}

void main()
{
	char ch;
	printf("Enter your Character");
	scanf("%c",&ch);
	
	change(&ch);
	printf("Answer:%c ",ch);
}
