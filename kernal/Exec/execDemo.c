#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>


int main(int argc, char * argv[])
{
	printf("execDemo pid is : %d \n", getpid());
	// There are various exec functions exce with
	// L : comma seperated arguments  (i.e  execl(args[0], "hello", "world", NULL)
	// V : Vector (i.e. an array of strings)
	// P : Include normal search path for executable
	char * args[] = {"./helloExec", "Hello", "World", NULL};
	execvp(args[0],args);	// Here we can give "./filename"
				//  ./ is given to check in the current path
				// As we have mentioned current path execvp is not required execv will 
				// work	
	printf("Farewell cruel world\n"); 	//This will not print because exec is the last command 
						//to be printed it will return the arguments
	return 0;
}

