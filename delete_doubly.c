#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node * next;
	struct node * prev;
};

void delete(struct node * node_ptr)
{
	if(node_ptr->next == NULL)
	{
		free(node_ptr);
		return;
	}
	struct node * temp = node_ptr->next;
	node_ptr->data = temp->data;
	node_ptr->next = temp->next;
	node_ptr->prev = NULL;
	free(temp);
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

void push(struct node **head_ptr, int new_data)
{
	struct node * newnode = (struct node*)malloc(sizeof(struct node));
	newnode->data = new_data;
	newnode->prev = NULL;
	newnode->next = (*head_ptr);
	if((*head_ptr) != NULL)
	{
		(*head_ptr)->prev = newnode;
	}
	(*head_ptr) = newnode;
}

int main()
{
	struct node *head = NULL;

	// push the nodes
	push(&head,5);
	push(&head,4);
	push(&head,3);
	push(&head,2);
	push(&head,1);

	printf("Before deleting\n");
	print(head);

	delete(head);	
	printf("After deleting\n");
	print(head);
}

