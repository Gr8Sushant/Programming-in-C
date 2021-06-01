#include<stdio.h>

void main()
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	int great;
	
	if(a>b&&a>c){
		great=a;
	}
	else if(b>a){
		great=b;
	}
	else{
		great=c;
	}
	if(great%2==0){
		printf("Even");
	}
	else{
		printf("odd");
	}
}
		
