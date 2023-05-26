#include<stdio.h>

void main()
{
	int num,x;
	printf("Enter any number\n");
	scanf("%d",&num);
	printf("Enter the position you want to toggle\n");
	scanf("%d",&x);
	num ^= 1<<x;
	printf("The toggled value is %d\n",num);
}

