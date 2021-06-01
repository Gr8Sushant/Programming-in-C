#include<stdio.h>

void main()
{
	char str[100];
	printf("Enter a string: ");
	gets(str);
	char rev[100];
	int j=0, length=0, i;
	
	while(str[j]!='\0')
	{
		length++;
		j++;
	}
	int end = length-1;
	for(i=0;i<length;i++)
	{
		rev[i]=str[end-i];
	}
	printf("The reversed string is: ");
	puts(rev);
}
