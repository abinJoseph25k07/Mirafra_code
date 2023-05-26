#include<stdio.h>
#include<stdlib.h>
#include<string.h>


void * mymemcpy(const void * sou, void * dest, unsigned int n)
{
	const char * csou = (const char *) sou;
	char * cdest = (char *) dest;
	if((csou == NULL) && ( cdest == NULL))
	{
		return NULL;
	}
	for(int i=0; i<n; i++)
	{
		*(cdest + i) = *(csou + i);
	}
	return dest;
}

int main()
{
	char sou[] = "Abinjoseph";
	char des[50];
	mymemcpy(sou,des,strlen(sou)+1);
	printf("The copied string is %s\n",des);
}
