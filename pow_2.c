#include<stdio.h>

void main()
{
	int num;
	printf("Enter any number\n");
	scanf("%d",&num);
	if(num && !(num & (num-1)))
	{
		printf("Number %d is power of 2\n",num);
	}
	else
	{
		printf("Not power of 2\n");
	}
}
