#include<stdio.h>


#define max(a,b,c) (a>b)?((a>c)?a: ((c>b)?c:b):(b>c):b)

void main()
{
	int a =5, b= 10, c =15;
	printf("Boggest of 3 is %d\n",max(a,b,c));
	
}

