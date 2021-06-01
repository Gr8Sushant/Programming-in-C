#include<stdio.h>
void main()
{
	char word[100];
	int l=0,i=0,n;
	printf("enter a string");
	gets(word);
	 
	while(word[i]!='\0')
	{
		l++;
		i++;
	}
	n=l;
	printf("The length of string is: %d",l);
	printf("Sum of numbers %d",n);
}
