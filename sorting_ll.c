#include<stdio.h>
#include<stdlib.h>

#define SIZE 5

struct node
{
	int data;
	struct node * next;
};

void swap(struct node *a, struct node *b);

void push(struct node ** head_ref, int new_data)
{
	struct node * newnode = (struct node *) malloc(sizeof(struct node));
	newnode->data = new_data;
	newnode->next = (*head_ref);
	(*head_ref) = newnode;
}

void print(struct node *head_ref)
{
	struct node * temp = head_ref;
	while( temp != NULL)
	{
		printf("%d ",temp->data);
		temp = temp->next;
	}
	printf("\n");
}

void sort( struct node * head_ref)
{
	int swapped;
	struct node * temp;
	struct node * curr = NULL;
	do
	{
		temp = head_ref;
		swapped = 0;
		while(temp->next != curr)
		{
			if(temp->data > temp->next->data)
			{
				swap(temp,temp->next);
				swapped = 1;
			}
			temp = temp->next;
		}
		curr = temp;
	}
	while(swapped);
}

void swap(struct node *a, struct node *b)
{
	int temp = a->data;
	a->data = b->data;
	b->data = temp;
}



int main()
{
	int arr[SIZE]={12,5,31,1,3};
	struct node * head =NULL;
	for(int i=0; i<SIZE; i++)
	{
		push(&head,arr[i]);
	}

	printf("Values before sorting\n");

	print(head);

	sort(head);

	printf("Values after sorted\n");

	print(head);
}
