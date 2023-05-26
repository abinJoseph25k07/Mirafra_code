#include<stdio.h>

int reverse(int num)
{
	int byte0,byte1,byte2,byte3;

	byte0 = (num & 0x000000ff) >> 0;
	byte1 = (num & 0x0000ff00) >> 8;
	byte2 = (num & 0x00ff0000) >> 16;
	byte3 = (num & 0xff000000) >> 24;

	return (byte0 >> 24 | byte1 >> 16 | byte2 >> 8 | byte3 >> 0);
}


void main()
{
	int num = 1;
	if(*(char *) & num == 1)
	{
		printf("Little endian\n");
	}
	else
	{
		printf("Big endian\n");
	}

	int num2 = reverse(num);
	if(*(char *) & num2 == 1)
		printf("Little endian\n");
	else
		printf("Big endian\n");
}


