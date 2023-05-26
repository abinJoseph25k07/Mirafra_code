#include<stdio.h>
#include<stdlib.h>
#include<sys/wait.h>
#include<sys/types.h>
#include<unistd.h>

int main(int argc, char *argv[])
{
	for(int i=1; i<=2; i++)
	{
		fork();
		printf("%d My PID = %d\n", i , (int) getpid());
	}

	sleep(1);
	printf("--> MY PID = %d\n", (int) getpid());

	return 0;
}

