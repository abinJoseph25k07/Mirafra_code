#include<stdio.h>


void main()
{
	int a = 5, b= 6;
	printf("a =%d, b=%d\n",a,b);
	a = a+b;
	b = a - b;
	a = a - b;
	printf("The swaped values are a=%d, b=%d\n",a,b);
}
