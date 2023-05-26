#include<stdio.h>
#include<stdlib.h>
/*

#define mysizeof(x) ((char *)(&x+1) - (char *)&x)

void main()
{
	double num =3;
	printf("The size of num is %ld\n",mysizeof(num));
}

*/

/*

void main()
{ 
	int num,pos;
	printf("ENter any number\n");
	scanf("%d",&num);
	printf("Enter the position\n");
	scanf("%d",&pos);
	if(num &(1<<pos))
		printf("Bit is set\n");
	else
		printf("Bit is not set\n");
}

*/

/*

void main()
{
	int num =1;
	if(*(char *)&num == 1)
	{
		printf("Little endian\n");
	}
	else
		printf("Big endian\n");
}

*/

/*
void main()
{
	int *ptr= (int)malloc(10);

	realloc(ptr,0);
}

---------------------------------------------*/

/* example.h

#include<stdio.h>


int get_count();


-----------------------------------

// sample1.c

#include "example.h"

	static int count = 0;

	int get_count(){
		return count;
	}

	void inc_count(){
		count++;
}

-------------------------------------

// sample2.c

#include "example.h"

int main()
{
	printf("count is %d\n",get_count());

	inc_count();

	printf("count is %d\n",get_count());
}

-----------------------------------------------------------*/

// example.h


void modify_count(int *count_ptr);


----------------------------------------------

//sample1.c


static int count =0;

void modify_count(int *count_ptr)
{
	*count_ptr++;
}

------------------------------------------------

//sample2.c

extern int count;

int main()
{

	printf("count is %d\n",count);
	
	modify_count(&count);

	printf("count is %d\n",count);
}


