#include<stdio.h>

/*

union endian 
{
	unsigned int num;
	unsigned char byte[4];
};

int main(unsigned int num)
{
	union endian e;
	e.num = num;


	unsigned char temp = e.byte[0];
	e.byte[0] = e.byte[3];
	e.byte[3] = temp;

	temp = e.byte[2];
	e.byte[2] = e.byte[1];
	e.byte[1] = temp;

	if(*(char *) & e.num == 1)
	{
		printf("Little Endian\n");
	}
	else
		printf("Big Endian\n");
}

---------------------------------------------*/

int main()
{
	int num;
	printf("Enter any number\n");
	scanf("%d",&num);
	if( (num & (num - 1)) == 0)
		printf("The number is a power of 2\n");
	else
		printf("The number is not a power of 2\n");
}

/*

int reverse(int n)
{
	int byte0,byte1,byte2,byte3;
	byte0 = (n & 0x000000FF) >> 0;
	byte1 = (n & 0x0000FF00) >> 8;
	byte2 = (n & 0x00FF0000) >> 16;
	byte3 = (n & 0xFF000000) >> 24;
	
	return (byte0 >> 24 | byte1 >> 16 | byte2 >> 8 | byte3 >> 0);
}




int main()
{
	int num =1;
	if(*(char *) & num == 1)
	{
		printf("Little endian\n");
	}
	else
	{
		printf("Big endian\n");
	}

	int num1 = reverse(num);

	if(*(char *) & num1 == 1)
	{
		printf("Little endian\n");
	}
	else
		printf("Big endian\n");

}

---------------------------------------------------------------------------------------*/
