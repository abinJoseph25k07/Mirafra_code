#include<stdio.h>
#include<stdlib.h>

int main()
{
	char str[10];
	int i,j;
	printf("Enter any strong\n");
	scanf("%s",&str);
	for(i=0; str[i] !='\0'; i++);
	for(j=0 ; j<i/2; j++)
	{
		char ch = str[j];
		str[j] = str[i-1-j];
		str[i-1-j] = ch;
	}
	printf("%s\n",str);
}
