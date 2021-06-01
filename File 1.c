#include<stdio.h>
void main()
{
	FILE *fptr;
	fptr=fopen("db.txt","w");
	char ch[100]="Programming is great";
	fputs(ch,fptr);
	fclose(fptr);
}

//writes to file
