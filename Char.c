#include<stdio.h>

void main()
{
	char ch;
	printf("Enter Your Character");
	ch = getchar();
	if(ch>=64 && ch<=90)
	{
		ch=ch+32;
		putchar(ch);
	}
	else
	{
		putchar(ch);
	}
	
	
}
		
		


