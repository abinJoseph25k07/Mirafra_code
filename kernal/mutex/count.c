#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>

#define NUM_LOOPS 200000  //If the count is very less there is no need to lock because instruction will
			  //execute fastly

long long sum = 0;

pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;

void * counting_function(void * arg)
{
	int offset = *(int *) arg;
	for(int i=0; i<NUM_LOOPS; i++)
	{
		// start critical section
		pthread_mutex_lock(&mutex);

		sum += offset;

		// end critical section
		pthread_mutex_unlock(&mutex);
	}
	pthread_exit(NULL);
}

int main(void)
{
//	counting_function(1);
//	counting_function(-1);
	pthread_t tid;
	int offset1 = 1;
	pthread_create(&tid, NULL, counting_function, &offset1);

	pthread_t tid1;
	int offset2 = -1;
//	offset1 =-1;	This will also cause race around condition
	pthread_create(&tid1, NULL, counting_function, &offset2);
//	pthread_create(&tid1, NULL, counting_function, &offset1);

	pthread_join(tid,NULL);
	pthread_join(tid1,NULL);

	printf("Sum = %lld\n", sum);
	return 0;
}

