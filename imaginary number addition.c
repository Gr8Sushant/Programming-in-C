#include<stdio.h>
struct complex{
	float real;
	float imag;
};
void main()
{
	struct complex c1,c2,c3;
	scanf("%f %f",&c1.real,&c1.imag);
	scanf("%f %f",&c2.real,&c2.imag);
	c3.real=c1.real+c2.real;
	c3.real=c1.real+c2.real;
	printf("%f %f",c3.real,c3.imag);	
}
