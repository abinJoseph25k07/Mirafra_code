
#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};

void push(struct node ** head_ptr, int new_data)
{
	struct node * newnode = (struct node *)malloc(sizeof(struct node));
	newnode->data = new_data;
	newnode->next = (*head_ptr);
	(*head_ptr) = newnode;
}

void delete(struct node *node_ptr)
{
	if(node_ptr->next == NULL)
	{
		free(node_ptr);
		return;
	}
	struct node * temp = node_ptr->next;
	node_ptr->data = temp->data;
	node_ptr->next = temp->next;
	free(temp);
}

void print(struct node * head)
{
	struct node *temp;
	for(temp = head; temp != NULL; temp = temp->next)
	{
		printf("%d ",temp->data);
	}
	printf("\n");
}

int main()
{
	struct node * head = NULL;

	// push the node
	push(&head,1);
	push(&head,2);
	push(&head,3);
	push(&head,4);
	
	// print the node
	printf("Before deleting\n");
	print(head);

	// delete the node
	delete(head);

	//print the nodes
	printf("After deleting\n");
	print(head);
}
