#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
	struct node *prev;
};

void push(struct node ** head_ptr, int new_data)
{
	struct node * newnode =(struct node *)malloc(sizeof(struct node));
	newnode->data = new_data;
	newnode->next = (*head_ptr);
	newnode->prev = NULL;

	if(newnode->next != NULL)
	{
		(*head_ptr)->prev = newnode;
	}
	(*head_ptr) = newnode;
}

void print(struct node * head)
{
	struct node * temp = head;
	while(temp != NULL)
	{
		printf("%d ",temp->data);
		temp = temp->next;
	}
	printf("\n");
}

void reverse(struct node ** head_ref)
{
	struct node *temp = NULL;
	struct node *curr = (*head_ref);

	while(curr != NULL)
	{
		temp = curr->prev;
		curr->prev = curr->next;
		curr->next = temp;
		curr = curr->prev;
	}	

	if(temp != NULL)
	{
		(*head_ref) = temp->prev;
	}
}	

int main()
{
	struct node * head = NULL;
	// create node
	push(&head,5);
	push(&head,4);
	push(&head,3);
	push(&head,2);
	push(&head,1);

	printf("Before reversing\n");
	print(head);

	reverse(&head);

	printf("After reversing\n");
	print(head);
}


/*
 
struct node * reverse(struct node *head, struct node *tail)
{
	struct node * curr,*temp;
	temp = head;
	while(temp->next != NULL)
	{
		curr = temp->next;
		temp->next = temp->prev;
		temp->prev = curr;
		temp = curr;
	}
	temp = head;
	head = tail;
	tail = temp;
	return head;
}

*/

