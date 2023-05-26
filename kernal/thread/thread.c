#include<stdio.h>
#include<pthread.h>

void * thread_func(void *p)
{
	printf("Thread is = %d\n",pthread_self());
	sleep(5);
	pthread_exit("exiting sub thread\n");
}

int main()
{
	char *a;
	pthread_t tid;
	pthread_create(&tid,NULL,thread_func,NULL);
	printf("main function=%u\n",tid);
	printf("Sambhavam color aayi.\n");
	pthread_join(tid,&a);
	printf("In main after ....%s\n",a);
}

