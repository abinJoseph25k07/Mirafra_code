#include<stdio.h>
#include<stdlib.h>

#define CAPACITY 5

void push(int);
int pop();
int isFull();
int isEmpty();
void traverse();
void peek();

int stack[CAPACITY];
int top = -1;

int main()
{
	int choice,item;
	while(1)
	{
		printf("Enter the choice\n1. push\n2. pop\n3. traverse\n4. peek\n5. exit\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				int ele;
				printf("Enter a value\n");
				scanf("%d",&ele);
				push(ele);
				break;
			case 2:
				item = pop();
				if(item == 0)
				{
					printf("Stack is empty\n");
				}
				else
				{
					printf("Popped item is : %d\n",item);
				}
				break;
			case 3:
				traverse();
				break;
			case 4:
				peek();
				break;
			case 5:
				exit(0);
			default:
				printf("Enter the correct choice\n");
				break;
		}
	}
}

void push(int ele)
{
	if(isFull())
	{
		printf("Stack is full\n");
	}
	else
	{
		top++;
		stack[top] = ele;
		printf("%d Element is pushed to stack\n",ele);
	}
}
 
int isFull()
{
	if(top == CAPACITY-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int pop()
{
	if(isEmpty())
	{
		printf("Stack is empty\n");
	}
	else
	{
		return stack[top--];
	}
}

int isEmpty()
{
	if(top <0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

void peek()
{
	if(isEmpty())
	{
		printf("Stack is empty\n");
	}
	else
	{
		printf("peek element : %d\n", stack[top]);
	}
}

void traverse()
{
	if(isEmpty())
	{
		printf("The stack is empty\n");
	}
	else
	{
		int i;
		printf("The stack values are\n");
		for(i=0; i<= top; i++)
		{
			printf("%d ",stack[i]);
		}
		printf("\n");
	}
}
