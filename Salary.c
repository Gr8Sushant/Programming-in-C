#include<stdio.h>

void main()
{
	char gender;
	gender = getchar();
	float salary, bonus;
	scanf("%f", &salary);
	if(gender=='f'&&salary>5000)
	{
		bonus=0.05*salary;
		salary=salary+bonus;
		printf("%f" ,salary);	
	}	
	else {
		bonus=0.02*salary;
		salary=salary+bonus;
		printf("%f" ,salary);
	}
	
}
		
		


