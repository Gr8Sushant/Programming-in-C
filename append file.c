#include<stdio.h>
void main()
{
	FILE *fptr;
	fptr=fopen("db.txt","a");
	char ch[20]="Yeah! Awesome";
	fputs(ch,fptr);
	fclose(fptr);
}

//writes to file append
