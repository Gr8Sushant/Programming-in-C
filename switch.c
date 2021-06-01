
	

#include<stdio.h>
#include<math.h>
void main()
{
	float r,p,t,si,ci;
	int ch;
	printf("Enter principle: ");
	scanf("%f",&p);
	printf("Enter time: ");
	scanf("%f",&t);
	printf("Enter rate: ");
	scanf("%f",&r);
	printf("\n Enter 5 for SI.");
	printf("\n Enter 25 for CI");
	printf("\nWhat do you want to do?: ");
	scanf("%d",&ch);
	
	switch(ch)
	{
		case 5:
			si=(p*t*r)/100;
			printf("SI is %f",si);
			break;
		
		case 25:
			ci=p*(pow((1+r/100),t));
			printf("CI is %f",ci);
			break;
			
		default:
		printf("invaild");
	}
}


