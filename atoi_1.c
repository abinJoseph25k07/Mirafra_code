#include<stdio.h>

int my_atoi(char *s)
{
	int res = 0;
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
	printf("ENter any string\n");
	scanf("%s", s);
	int val = my_atoi(s);
	printf("%d \n",val);
	return 0;
}
	
