#include<stdio.h>


void main()
{
	char x[2];
	if((&x[0] - &x[1]) < 0 )
		printf("Down stack\n");
	else
		printf("Up stack\n");
}

