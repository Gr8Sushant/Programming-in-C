#include<stdio.h>
#include<math.h>

void main(){
	int sv;
	float p,t,r,si,ci;
	printf("enter p: \n");
	scanf("%f",&p);
	printf("enter t: \n");
	scanf("%f",&t);
	printf("enter r: \n");
	scanf("%f",&r);		
	
	printf("Press 1 for S.I and 2 for C.I :\n");
	scanf("%d",&sv);
	
	switch (sv)
	{
		case 1:
			si=(p*t*r)/100;
			printf("SI is %f",si);
			break;
		case 2:
			ci=p*(pow((1+r/100),t));
			printf("CI is %f",ci);
			break;
		default:
			printf("INVALID");
	}	
}


