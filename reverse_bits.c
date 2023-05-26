#include<stdio.h>
#include<stdlib.h>

void displayBits(int x);

void main()
{
	unsigned int num,rev,count;
	scanf("%d",&num);
	displayBits(num);
/*	for(int i = 0; i<32; i++)
	{
		if(num &(1<<i))
		{
			rev = rev | (1<<(31-i));
		}
	}
	displayBits(rev);
*/
	num = num >> 1;
	while(num)
	{
		rev = rev << 1;
		rev |= num & 1;
		num = num >> 1;
		count --;
	}
	rev = rev << count;
	displayBits(rev);
}

void displayBits(int x)
{
	int i,mask;
	for(i=31; i>=0; i--)
	{
		mask = 1<<i;
		putchar((x&mask)?'1':'0');
		if(i%8 == 0)
			putchar(' ');
	}
	printf("\n");
}
