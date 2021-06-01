#include<stdio.h>

int sum(int n)
{
	int check,sum;
	
	while(n>0)
	{
		check=n%10;
		if(check%2==0)
		{
			sum=sum+check;
		}
		n=n/10;
	}
	return sum;
}

void main()
{
	int ip=12345678910;
	int sumEvenNum= sum(ip);
	printf("The sum of even number is: \n%d", sumEvenNum);
}
