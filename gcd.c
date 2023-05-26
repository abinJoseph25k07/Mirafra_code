#include<stdio.h>


void main()
{
	int num1,num2,temp,big,small;
	printf("Enter any value\n");
	scanf("%d%d",&num1,&num2);
	if(num1 > num2)
	{
		big = num1;
		small = num2;
	}
	else
	{
		big = num2;
		small = num1;
	}
	while(small)
	{
		temp = big % small;
		big = small;
		small = temp;
	}
	printf("The gcd of %d and %d is %d\n",num1,num2,big);
}
