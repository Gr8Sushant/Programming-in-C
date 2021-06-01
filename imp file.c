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
	fptr=fopen("student.txt","w");
	struct student s1;
	printf("Enter the name: ");
	gets(s1.name);
	printf("\nEnter the rollnumber and marks: ");
	scanf("%d %f",&s1.rollno,&s1.marks);
	fprintf(fptr,"%s %d %f",s1.name,s1.rollno,s1.marks);
	fclose(fptr);
}

//8marks Sure
