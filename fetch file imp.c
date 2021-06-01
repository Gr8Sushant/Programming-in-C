#include<stdio.h>
struct student
	{
		char name[20];
		int rollno;
		float marks;
	};
void main()
{
	FILE *fptr;
	fptr=fopen("student.txt","r");
	struct student s2;
	fscanf(fptr,"%s %d %f",s2.name,&s2.rollno,&s2.marks);
	printf("%s %d %f",s2.name,s2.rollno,s2.marks);
}


