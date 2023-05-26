#include<stdio.h>
#include<stdlib.h>

#define CAPACITY 5

void insert();
void delete();
void traverse();

int queue[CAPACITY];
int front = 0;
int rear = 0;

int main()
{
	int choice;
	while(1)
	{
		printf("Enter your choice\n1. insert\n2. delete\n3. traverse\n4. exit\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				insert();
				break;
			case 2:
				delete();
				break;
			case 3:
				traverse();
				break;
			case 4:
				exit(0);
			default:
				printf("Invalid input\n");
		}
	}
}

void insert()
{
	if(rear == CAPACITY)
	{
		printf("Queue is full\n");
	}
	else
	{
		int ele;
		printf("Enter any value\n");
		scanf("%d",&ele);
		queue[rear] = ele;
		rear++;
	}
}

void delete()
{
	if(front == rear)
	{
		printf("The queue is empty\n");
	}
	else
	{
		printf("deleted  queue %d\n",queue[rear]);
		for(int i=0; i<rear-1; i++)
		{
			queue[i] = queue[i+1];
		}
		rear--;
	}
}

void traverse()
{
	if(front == rear)
	{
		printf("The queue is empty\n");
	}
	else
	{
		printf("Queue elements are\n");
		for(int i=front; i<rear; i++)
		{
			printf("%d ",queue[i]);
		}
		printf("\n");
	}
}

