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
	fptr=fopen("Array of student.txt","r");
	struct student s[3];
	int i;
	for(i=0;i<3;i++)
	{
		fscanf(fptr,"%s %d %f\n",s[i].name,&s[i].rollno,&s[i].marks);
		printf("%s %d %f\n",s[i].name,s[i].rollno,s[i].marks);
	}
	fclose(fptr);
}

//8 marks sure
