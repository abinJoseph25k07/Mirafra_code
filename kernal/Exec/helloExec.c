#include<stdio.h>
#include<unistd.h>

int main(int argc, char *argv[])
{
	printf("helloeexec.c\n");
	printf("  My PID is %d\n", getpid());

	printf("  My Arguments: ");
	for(int i = 0; i<argc; i++)
	{
		printf("%s, ", argv[i]);
	}

	printf("\n");
	return 0;
}

