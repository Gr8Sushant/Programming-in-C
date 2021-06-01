#include<stdio.h>

int sum(int n){
	int r, s=0;
	while(n>0){
		r=n%10;
		if (r%2==0){
			s=s+r;
		}
		n=n/10;
	}
	return s;
}

void main()
{
	int a;
	printf("Enter numbers to be added: \n");
	scanf("%d",&a);
	int evenSum= sum(a);
	printf("%d",evenSum);
}
