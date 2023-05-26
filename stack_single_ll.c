#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node * next;
};

void push(struct node ** head, int new_data);
void print(struct node * head_ref);
void pop(struct node * head_ref);

int main()
{
	struct node * head = NULL;

	push(&head,4);
	push(&head,5);
	push(&head,6);
	push(&head,7);
	push(&head,8);

	print(head);

	pop(head);
	pop(head);
	
	print(head);

}



void push( struct node ** head,int new_data)
{
	struct node * newnode;
	newnode =(struct node *) malloc(sizeof(struct node));
	newnode->data = new_data;
	newnode->next = *head;
	*head = newnode;
}

void print(struct node * head_ref)
{
	struct node * temp = head_ref;
	while(temp != NULL)
	{
		printf("%d ",temp->data);
		temp = temp->next;
	}
	printf("\n");
}

void pop(struct node * head_ref)
{
	struct node * temp = head_ref;
	head_ref = temp->next;
//	free(temp);
}
