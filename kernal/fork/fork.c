#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<unistd.h>


void Dosomework(char *name)
{
	const int NUM_TIMES = 2;
	for(int i=0; i<NUM_TIMES; i++)
	{
		sleep(rand() % 4);
		printf("Done pass %d for %s \n",i,name);
	}
}

int main(int argc, char * argv[])
{
	printf("I am %d\n",(int) getpid());

	pid_t pid = fork();
	srand((int) pid);
	printf("Fork returned %d\n", (int) pid);

	if(pid < 0)
	{
		perror("Fork Failed\n");
	}
	if(pid == 0)
	{
		printf("I am the child with pid %d\n", (int) getpid());
//		sleep(5);
//		printf("Child exiting...\n");
		Dosomework("Child");
//		exit(0);	 to mention that the return is sucecss
		exit(42);
	}

	// Here we only need to mention the parent
	printf("I am parent with pid, waiting for the child to end\n");
	sleep(10);
//	Dosomework("Parent");

	int status = 0;
	pid_t childpid = wait(&status);
//	pid_t childpid = wait(NULL);	 waiting for the child process to terminate
	printf("Parent knows the child %d is finished with status %d\n", (int)childpid, status);
	int childReturnValue = WEXITSTATUS(status);
	printf("    Return value was %d\n",childReturnValue);
	sleep(60);

	return 0;
}
