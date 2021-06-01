#include<stdio.h>
	struct student
	{
		char name[20];
		int rollno;
		float marks;
	};
	void main()
	{
		struct student s[5];
		int i,search;
		for(i=0;i<5;i++)
		{
				printf("Enter the details of %dth students",i);
				fflush(stdin);
				gets(s[i].name);
				scanf("%d",&s[i].rollno);
				scanf("%f",&s[i].marks);
		}
		printf("\nEnter the rollnumber of the student to be searched");
		scanf("%d",&search);
		for(i=0;i<5;i++)
		{	
			if(s[i].rollno==search)
			{
				printf("\n %s %d %f %c",s[i].name,s[i].rollno,s[i].marks);	
			}
		}	
	}
