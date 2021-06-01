#include<stdio.h>

void main()
{
	int i, length=0;
	char ch[100];
	gets(ch);
	
	while(ch[i]!='\0')
	{
	
		i++;
		length++;
	}
	printf("The total length of the word is: %d",length);
}
