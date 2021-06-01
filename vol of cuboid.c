#include<stdio.h>
void main(){
	int l=5 ,b=10 ,h,volume;
	volume=total(l,b);
	printf("the volume is %d",volume);	
}
int total(int l,int b)
{
	int h,vol;
	printf("enter the height: ");
	scanf("%d",&h);
	vol=l*b*h;
	return vol;
}
