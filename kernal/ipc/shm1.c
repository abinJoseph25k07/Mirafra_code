#include "header.h"

int main()
{
	int id;
	char *p;

	id = shmget(2,50,IPC_CREAT |0666);
	perror("shmget");
	printf("id = %d\n",id);
	p = shmat(id,0,0);
	printf("data = %s\n",p);
}

