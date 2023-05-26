#include<stdio.h>
#include<stdlib.h>

struct node 
{
	int data;
	struct node * next;
};


void push( struct node ** head_ref, int new_data)
{
	struct node * newnode = (struct node *) malloc( sizeof(struct node));
	newnode->data = new_data;
	newnode->next = (*head_ref);
	(*head_ref) = newnode;
}

void print(struct node * head_ref)
{
	struct node * temp = head_ref;
	while( temp !=NULL)
	{
		printf("%d ",temp->data);
		temp = temp->next;
	}
	printf("\n");
}

void reverse(struct node ** head_ref)
{
	struct node * temp, *curr, *prev;
	temp = curr = (*head_ref);
	prev = NULL;
	while(temp != NULL)
	{
		temp =temp->next;
		curr->next= prev;
		prev = curr;
		curr = temp;
	}
	(*head_ref) = prev;
}

int main()
{
	struct node * head = NULL;

	push(&head,2);
	push(&head,3);
	push(&head,4);
	push(&head,5);

	printf("The values are\n");
	print(head);

	reverse(&head);

	printf("The reversed values are\n");
	print(head);
}

