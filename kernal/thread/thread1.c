#include "header.h"

static pthread_mutex_t mutex;

void *create_funct(void *p)
{
	printf("Thread 1 has started..\n");
	pthread_mutex_lock(&mutex);
	printf("Thread 1 is sleeping..\n");
	sleep(0);
	printf("Came out of thread1--\n");
	pthread_mutex_unlock(&mutex);
}

void *create_funct1(void *p)
{
	printf("Thread 2 has started..\n");
	pthread_mutex_lock(&mutex);
	printf("Thread 2 is sleeping...\n");
	sleep(2);
	printf("Thread 2 has finished...\n");
	pthread_mutex_unlock(&mutex);
}

int main()
{
	pthread_t tid;
	pthread_t tid1;

	pthread_mutex_init(&mutex,NULL);
	printf("VCreating thread 1\n");
	pthread_create(&tid,NULL,&create_funct, NULL);
	printf("Creating thread 2\n");
	pthread_create(&tid1,NULL,&create_funct1,NULL);

	pthread_join(tid,NULL);
	pthread_join(tid,NULL);

	pthread_mutex_destroy(&mutex);
}

