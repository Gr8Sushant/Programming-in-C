#include<stdio.h>

void main()
{
	int a,b;
	char op;
	printf("enter your two numbers and one operator");
	scanf("%d %d %c",&a,&b,&op);
	
	switch(op)
	{
		case '+':
		printf("%d",a+b);
		break;
		case '-':
		printf("%d",a-b);
		break;
		case '*':
		printf("%d",a*b);
		break;
		case '/':
		printf("%d",a/b);	
		default:
			printf("Typing Error");
	}
}
		
