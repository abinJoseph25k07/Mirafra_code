#include "header.h"

int main()
{
	int id;
	char *p;

	while(1)
	{
		id = shmget(2,50,IPC_CREAT |0666);
		perror("shmget");
		printf("id = %d\n",id);
		p = shmat(id,0,0);
		printf("Enter  the string..\n");
		scanf("%s",p);
	}
}

