#include<stdio.h>
#include<stdlib.h>

typedef struct node 
{
	void * data;
	struct node * next;
}Node;

void push(Node ** head, void * new_data, size_t x_size)
{
	Node * newnode;
	newnode = (Node *)malloc (sizeof(Node));
	newnode->data = malloc(x_size);
	newnode->next = *head;

	// copying the data x to new node created

	for(int i=0; i<x_size; i++)
	{
		*(char *)(newnode->data + i) = *(char *)(new_data + i);
	}
	*head = newnode;
}

// function to print int values

void printIt(Node * head, void (*ptr)(void *))
{
	while(head != NULL)
	{
		(*ptr)(head->data);
		head = head->next;
	}
	printf("\n");
}

void prInt(void *x)
{
	printf("%d ",*(int *)x);
}

// function to print float values

void prFt(void *x)
{
	printf("%f ",*(float *)x);
}

int main()
{
	Node * start = NULL;

	// for integer type variables
	unsigned int_size = sizeof(int);	
	int a[]={3,7,12,2,56};
	for(int i =0; i<5; i++)
	{
		push(&start,&a[i],int_size);
	}

	printIt(start , prInt);

	unsigned float_size = sizeof(float);
	float b[]={3.4,6.8,4.3,6.7,2.1};
	start = NULL;
	for(int i =0; i<5; i++)
	{
		push(&start,&b[i],float_size);
	}

	printIt(start , prFt);

}
