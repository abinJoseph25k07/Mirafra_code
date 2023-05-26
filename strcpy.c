#include<stdio.h>
/*

char * mystrcpy(const char * src, char * dest)
{
	char * cdest;
        cdest = dest;

	while(*dest++=*src++);
	return cdest;
}

int main()
{
	char *src="abinjoseph";
	char *dest;
	mystrcpy(src,dest);
	printf("The copied value is %s\n",dest);
}

*/
//char * astrcpy(char * str1, char * des)
//{
//	while((*des= *str1)!='\0')
//	{
//		des++;
//		str1++;
//	}
//	return des;
//}
char * astrcpy(char str1[],char des[])
{
	for(int i=0; ((des[i] = str1[i])!= '\0'); i++);
	return des;
}


int main()
{
	char str[10],des[10];
	printf("Enter any string\n");
	gets(str);
	astrcpy(str,des);
	printf("The copied string is %s\n",des);
}
