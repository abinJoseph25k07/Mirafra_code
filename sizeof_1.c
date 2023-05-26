#include<stdio.h>

#define mysizeof(x)  ((char*)(&x + 1) - (char *)(&x))

void main()
{
	double num =5;
	printf("The size of int is %ld\n",mysizeof(num));
}
