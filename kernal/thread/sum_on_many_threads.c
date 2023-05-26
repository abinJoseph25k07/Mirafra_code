#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>

// We can execute mulitple copies of same thread function

struct sum_runner_struct{
	long long limit;
	long long answer;
};

// Thread function to generate sum of 1 to n
void * sum_runner(void * arg)
{
	struct sum_runner_struct * arg_struct = (struct sum_runner_struct *) arg;

	long long sum = 0;
	for(long long i =0; i<= arg_struct->limit; i++)
	{
		sum += i;
	}

	arg_struct->answer = sum;
	
	pthread_exit(0); // 0 because we are not returning anything and there we have written NULL
}

int main(int argc, char **argv)
{
	if(argc < 2)
	{
		printf("Usage: %s <num><num1><num2>....<num-n>\n", argv[0]);
		exit(-1);
	}

	int num_args = argc - 1;
	// Thread id  we are typedefing it
	
	struct sum_runner_struct args[num_args]; // Here we are taking alll the values in an array
						 // because it cannot be placed inside the for loop as
						 // memory gets deallocated in each iteration and we are
						 // printing the sum outside so in loop the stack will 
						 // be deleted in each iteration
	pthread_t tids[num_args];
	// here we give sum_runner without () because we doesn't want to return anything and limit with
	// & beacuse we are taking it as a pointer
	for(int i =0 ; i < num_args; i++)
	{
		args[i].limit = atoll(argv[i+1]);
		pthread_attr_t attr;
		pthread_attr_init(&attr);
		pthread_create(&tids[i], &attr, sum_runner, &args[i]);
	}
	
	//wait until the thread has done its work NULL is giving because we dont want to return anything
	for(int i =0; i<num_args; i++)
	{
		pthread_join(tids[i], NULL);
		printf("Sum is %lld\n", args[i].answer);
	}
}
