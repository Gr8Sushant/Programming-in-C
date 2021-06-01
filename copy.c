#include<stdio.h>

void main()
{
	char org[100];
	gets(org);
	char copy[100];
	int j=0, length=0, i;
	
	while(org[j]!='\0')
	{
		length++;
		j++;
	}
	for(i=0;i<length;i++)
	{
		copy[i]=org[i];
	}
	copy[i]='\0';
	puts(copy);
}
