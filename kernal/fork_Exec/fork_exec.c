#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/wait.h>

#define num 4

int main(int argc, char * argv[])
{
	printf("My pid is %d\n", getpid());
	// We are using for loop to process the child 4 times inorder to check the cpu utilization 
	// similarily we need to make the parent wait for it

	for(int =0; i<num; i++)
	{
		pid_t pid = fork();

		if(pid < 0)
		{
			perror("FORK FAILED\n");
			exit(1);
		}
		else if( pid == 0)
		{
			//child exits
			char * args[] = {"./bogo", "1", "2", "3", NULL};
			execv(args[0], args);
		}
	}

	// parent never wait for the child to complete so we must make parent to wait
	printf("Parent is waiting for the child process\n");
	for(int i=0; i<num; i++)
	{
		wait(NULL);
	}

	return 0;
}


