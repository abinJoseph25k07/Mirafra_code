#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void * Mymemcpy(void * dest,const void * src, unsigned int n)
{
	const char * csrc = (const char *)src;
	char * cdest = (char *) dest;

	if((csrc == NULL) && (cdest == NULL))
	{
		return NULL;
	}

	while(n)
	{
		*(cdest++) = *(csrc++);
		--n;
	}
	return dest;
}

int main()
{
	char csrc[] = "AbinJoseph";
	char cdest[50];
	
	Mymemcpy(cdest,csrc,strlen(csrc)+1);
	printf("Copied string is %s",cdest);

	int isrc[] ={10,20,30,40,50};
	int n = sizeof(isrc)/sizeof(isrc[0]);
	int idest[n],i;

	Mymemcpy(idest,isrc,sizeof(isrc));
	printf("\nCopied array is ");
	for(i=0; i<n; i++)
	{
		printf("%d ",idest[i]);
	}
	printf("\n");
	return 0;
}

