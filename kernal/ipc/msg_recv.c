#include "header.h"

struct msgbuf
{
	long mtype;
	char data[20];
};

int main()
{
	int id;
	struct msgbuf v;
	id = msgget(3, IPC_CREAT | 0666);
	perror("msgget");
	printf("Before receiving the message\n");
	msgrcv(id,&v,20,2,0);
	printf("Data = %s\n",v.data);
}
