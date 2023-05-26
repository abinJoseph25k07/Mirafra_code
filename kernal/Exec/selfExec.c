#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

// All the global variables are wiped out when the exec is called because new process is created

int main(int argc, char * argv[])
{
	printf("selfExec pid is : %d \n", getpid());
//	char * args[] = {"./selfExec", "Hello", "World", NULL};   This makes the program to be replaced
						// a new process which is the same one ./selfExec

	if(argc != 2)	// Here we are trying to call the same process and change its arguments
	{			// In this we are checking whether there is any argument if not exit
		printf("Pass 1 argument as integer\n");
		exit(1);
	}
	int n = atoi(argv[1]);	// If there is any argument it prints
	printf("%d....\n", n);	
	
	if(n!=0)			// Inorder to pass an argument we need to pass a string
	{
		char nMinus1[10];
		sprintf(nMinus1, "%d", n-1);
		execl(argv[0], argv[0], nMinus1, NULL);  // first argv is the one we are calling and 
	}						// the next three are arguments

//		execvp(args[0],args);	    
	printf("Farewell cruel world\n"); 
						
	return 0;
}

