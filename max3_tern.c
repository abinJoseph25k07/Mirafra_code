#include<stdio.h>


void main()
{
	int a,b,c,big;
	printf("Enter the values of a,b,c\n");
	scanf("%d%d%d",&a,&b,&c);
	big =(a>b)?((a>c)?a:c):((b>c)?b:c);
	printf("The biggest is %d\n",big);
}	
