#include<stdio.h>

int myatoi(const char  *ch)
{
	int res =0;
	while( (*ch >= '0') && (*ch <='9'))
	{
		res =(res *10) + (*ch - '0');
		ch++;
	}
	return res;
}


int main()
{
	char ch[10];
	printf("Enter the character\n");
	gets(ch);
	printf("The converted string is %d\n",myatoi(ch));
}
