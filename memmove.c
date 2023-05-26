#include<stdio.h>
#include<stdlib.h>
#include<string.h>


void * Mymemmove(void * dest,const void * src, unsigned int n)
{
	const char * csrc = (const char *)src;
	char * cdest = (char *)dest;

	char * temp = (char *) malloc (sizeof(char) *n);
	if(temp == NULL)
	{
		return NULL;
	}
	else
	{
		unsigned int i=0;
		for(i=0; i<n; i++)
		{
			*(temp + i) = *(csrc + i);
		}
		for(i=0; i<n; i++)
		{
			*(cdest + i) = *(temp + i);
		}
		free(temp);
	}
	return dest;
}


int main()
{
	char csrc[]="AbinJoseph";

	Mymemmove(csrc,csrc,strlen(csrc)+1);

	printf("THe copied string is %s\n",csrc);
}

