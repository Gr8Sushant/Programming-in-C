//reads from file
#include<stdio.h>
void main()
{
	FILE *fptr;
	fptr=fopen("db.txt","r");
	char ch[100];
	fgets(ch,100,fptr);
	puts(ch);
	fclose(fptr);
}

