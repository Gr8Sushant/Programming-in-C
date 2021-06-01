#include<stdio.h>
struct complex{
	float real;
	float imag;
};
void change(struct complex *ptr)
{
	ptr->real=ptr->real+10;
	ptr->imag=ptr->imag+10;
}
struct complex sum(struct complex c1)
{
	struct complex c3;
	c3.real=c1.real+10;
	c3.imag=c1.imag+10;
	return c3;
}
void main()
{
	struct complex c1 ={5.5,7.7};
	printf("\nBefore changing the value %f %f",c1.real,c1.imag);
	change(&c1);
	printf("%f %f",c1.real,c1.imag);
}
