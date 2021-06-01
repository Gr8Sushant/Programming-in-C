#include<stdio.h>
struct complex{
	float real;
	float imag;
};
struct complex sum(struct complex c1)
{
	struct complex c3;
	c3.real=c1.real+10;
	c3.imag=c1.imag+10;
	return c3;
}
void main()
{
	struct complex a1=(11.01,12.03);
	struct complex b1=sum(a1);
	print("%f %f",b1.real,b1.imag);
}
