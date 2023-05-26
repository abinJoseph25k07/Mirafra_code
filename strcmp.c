#include<stdio.h>

/*

int astrcmp(char str1[], char str2[])
{
	int i;
	for(i=0; str1[i] == str2[i] ; i++)
	{
		if(str1[i] == '\0')
			return 0;
	}
	return (str1[i] - str2[i]);
}

*/

int astrcmp(char * str1, char * str2)
{
	while(*str1 == *str2)
	{
		if(*str1 == '\0')
		{
			return 0;
		}
		str1++;
		str2++;
	}
	return (*str1 - *str2);
}

int main()
{
	char str1[10], str2[10];
	printf("Enter the first string\n");
	gets(str1);
	printf("Enter the second string\n");
	gets(str2);
	if((astrcmp(str1,str2) == 0))
	{
		printf("String is equal\n");
	}
	else
		printf("Strings are not equal\n");
}
