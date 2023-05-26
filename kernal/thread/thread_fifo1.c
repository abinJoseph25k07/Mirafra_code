#include "header.h"

void * thread_func(void *p)
{
	char a[20];
	int fd;
	mkfifo("f2",0666);
	fd = open("f2",O_RDWR |O_CREAT,0666);

	while(1)
	{
		printf("Enter the string...\n");
		scanf("%s",a);
		write(fd,a,strlen(a)+1);
	}
}

void * thread_func1(void *q)
{
	char b[20];
	int fd1;
	mkfifo("f1",0666);

	fd1 = open("f1",O_RDWR | O_CREAT, 0666);

	while(1)
	{
		read(fd1,b,20);
		printf("data=%s\n",b);
	}
}

int main()
{
	pthread_t t1,t2;
	pthread_create(&t1,NULL,thread_func,NULL);
	pthread_create(&t2,NULL,thread_func1,NULL);
	while(1);
}
