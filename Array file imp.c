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
	fptr=fopen("Array of student.txt","w");
	struct student s[3];
	int i;
	for(i=0;i<3;i++){
		printf("Enter the details of %d student",i+1);
		fflush(stdin);
		gets(s[i].name);
		scanf("%d",&s[i].rollno);
		scanf("%f",&s[i].marks);
		fprintf(fptr,"%s %d %f\n",s[i].name,s[i].rollno,s[i].marks);
	}
	fclose(fptr);
}

//8 marks sure
