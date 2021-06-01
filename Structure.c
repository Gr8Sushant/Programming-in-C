#include<stdio.h>
	struct student
	{
		char name[20];
		int rollno;
		float marks;
		char remarks;
	};
	void main()
	{
		struct student s1;
		printf("Enter the details of the students");
		gets(s1.name);
		scanf("%d",&s1.rollno);
		scanf("%f",&s1.marks);
		scanf(" %c",&s1.remarks);
		printf("\n %s %d %f %c",s1.name,s1.rollno,s1.marks,s1.remarks);
	}
