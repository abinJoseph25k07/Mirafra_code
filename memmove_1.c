#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void * mymemmove(void * dsrc, const void * src, unsigned int n)
{
	char * cdsrc = (char *) dsrc;
	const char * csrc = (const char *) src;

	char * temp = (char *)malloc (sizeof(char)*n);

	if(temp == NULL)
	{
		return NULL;
	}
	else
	{
		unsigned int i;
		for(i=0; i<n; i++)
		{
			*(temp + i) = *(csrc + i);
		}
		for(i=0; i<n; i++)
		{
			*(cdsrc + i) = *(temp + i);
		}
		free(temp);
	}
	return dsrc;
}

int main()
{
	char csrc[]="abinjoseph";
	mymemmove(csrc,csrc,strlen(csrc)+1);
	printf("The copied string is %s\n",csrc);
}
