/*fACTORIAL OF NUMBER
 * #include<stdio.h>

int fact(int num)
{
	if(num == 1)
		return 1;
       return (num*fact(num-1));
}	       


int main()
{
	int num;
	printf("ENter any number\n");
	scanf("%d",&num);
	printf("The factorial of %d is %d\n",num,fact(num));
}
--------------------------------------------------------------------*/


#include<stdio.h>


void main()
{
	int num,fib1=0,fib2=1,fib3,flag=0;
	printf("Enter any number\n");
	scanf("%d",&num);
//	printf("The fibonacci series is \n");
	while(fib1 <= num)
	{
		if(fib1 == num)
		{
			flag =1;
		}
		fib3 = fib1 + fib2;
		fib1 = fib2;
		fib2 = fib3;
	}
//	printf("\n");
	if(flag == 1)
	{
		printf("The %d is a fibonacci number\n",num);
	}
	else
		printf("Not a fibonacci number\n");
}


