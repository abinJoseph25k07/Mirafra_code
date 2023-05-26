#include<stdio.h>

/*
void main()
{
	char x[2];

	if((&x[1] - &x[0]) < 0)
		printf("Downwards\n");
	else
		printf("Upwareds\n");
}
------------------------------------------*/

void stack(int *local_1)
{
	int local_2;
	if(local_1 < &local_2)
	{
		printf("Downwards\n");
	}
	else
		printf("Upwards\n");
}


void main()
{
	int local_1;
	stack(&local_1);
}


