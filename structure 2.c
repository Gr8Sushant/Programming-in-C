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
		struct student s[3];
		int i;
		for(i=0;i<3;i++)
		{
			printf("Enter the details of %dth students",i);
			fflush(stdin);
			gets(s[i].name);
			scanf("%d",&s[i].rollno);
			scanf("%f",&s[i].marks);
		}
		for(i=0;i<3;i++)
		{
				printf("\n %s %d %f %c",s[i].name,s[i].rollno,s[i].marks,s[i].remarks);	
		}	
	}
