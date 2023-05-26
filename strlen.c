#include<stdio.h>

/*

int getstrln(char str[])
{
	int i;
	for(i=0; str[i] != '\0'; i++);
	return i;
}

*/

int getstrln(char * str)
{
	char * ptr = str;
	while(*ptr != '\0')
		ptr++;
	return ptr-str;
}

int main()
{
	char s[]= "Abin joseph";
	printf("The length of string is %d\n",getstrln(s));
}


