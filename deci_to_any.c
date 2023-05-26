#include<stdio.h>

void bin(int num)
{
	int rem,val=0,f=1;
	printf("binary number\n");
	while(num != 0)
	{
		rem = num % 2;
		val += f*rem;
		f *= 10;
		num /= 2;
	}
	printf("the binary number is %d\n",val);
}

void oct(int num)
{
	int rem,val=0,f=1;
	printf("Octal number\n");
	while(num != 0)
	{
		rem = num % 8;
		val += f*rem;
		f *= 10;
		num /= 8;
	}
	printf("The octal number is %d\n",val);
}
void hex(int num)
{
	int rem,val=0,i=1;
	char Hexadec[100];
	printf("Hexa decimal number\n");
	while(num != 0)
	{
		rem = num % 16;

		if(rem < 10)
		{
			rem = rem + 48;
		}
		else
		{
			rem = rem + 55;
		}
		Hexadec[i++] = rem;
		num = num/16;
	}
	for(int j = i-1; j>0; j--)
	{
		printf("%c",Hexadec[j]);
	}
	printf("\n");
}


void main()
{
	int num;
	printf("Enter any decimal value\n");
	scanf("%d",&num);
	bin(num);
	oct(num);
	hex(num);
}
