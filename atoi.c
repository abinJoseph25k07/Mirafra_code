#include<stdio.h>
#include<stdlib.h>


int myatoi(const char * s)
{
	int res=0;

	while((*s >= '0') && (*s <= '9'))
	{
		res = (res * 10) + (*s - '0');
		s++;
	}
	return res;
}

int main()
{
	char s[10];
	printf("Enter the string to be converted\n");
	scanf("%s",s);
	int val = myatoi(s);
	printf("%d \n",val);
	return 0;
}


