#include<stdio.h>
#include<string.h>

void my_strstr(char *str,char * patt, int s,int p)
{
	unsigned int i,j;
	printf("String is %s\nPattern is %s\nLength of String %d\nlength of pattern %d\n",str,patt,s,p);

	for(j=0; j<=(s-p); ++j)
	{
		for(i=0; i<p && patt[i] == 	str[i+j]; ++i);
		if(i >= p)
			printf("Match found at %d for %s\n",j,patt);
	}
}

int main()
{
	char *string = "herroheroherio";
	char *pattern = "hero";
	int s = strlen(string);
	int p = strlen(pattern);
	my_strstr(string,pattern,s,p);
}
