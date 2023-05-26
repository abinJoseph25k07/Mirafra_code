#include<stdio.h>

char calc_byte(unsigned char byte)
{
	int parity = 0;
	while(byte)
	{
		parity ^= byte & 1;
		byte >>= 1;
	}
	return parity;
}

int main()
{
	unsigned char byte,parity_bit, corrected_byte;

	printf("Enter a byte\n");
	scanf("%c",&byte);

	parity_bit = calc_byte(byte);

	if(parity_bit != (byte & 1))
	{
		corrected_byte = byte ^ 1;
		printf("Parity error detected. corrected byte is %c\n",corrected_byte);
	}
	else
	{
		printf("Parity check passed. Byte is %c\n",byte);
	}
}
