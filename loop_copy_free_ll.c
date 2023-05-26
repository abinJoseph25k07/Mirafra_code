#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node * next;
};

void push(struct node ** head_ref, int newdata)
{
	struct node * newnode = (struct node *)malloc(sizeof(struct node));
	newnode->data = newdata;
	newnode->next = (*head_ref);
	(*head_ref) = newnode;
}

void print(struct node *head)
{
	struct node * temp = head;
	while(temp != NULL)
	{
		printf("%d ",temp->data);
		temp = temp->next;
	}
	printf("\n");
}

int detectloop(struct node * head_ref)
{
	struct node *fast = head_ref, *slow = head_ref;
	while(slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if(slow == fast)
		{
			return 1;
		}
	}
	return 0;
}

void copy_ll(struct node * q, struct node ** s)
{
	if(q != NULL)
	{
		*s = malloc(sizeof(struct node));
		(*s)->data = q->data;
		(*s)->next = NULL;
		copy_ll(q->next,&((*s)->next));
	}
}

void middle(struct node * head_ref)
{
	struct node * first = head_ref, * second = head_ref;
	while(second->next != NULL && second->next->next != NULL)
	{
		second = second->next->next;
		first = first->next;
	}
	printf("The middle element in the linked list is %d\n",first->data);
}

void free_nodes(struct node * head_ref)
{
	struct node * listptr, *nextptr;
	for(listptr = head_ref; listptr != NULL; listptr = nextptr )
	{
		nextptr = listptr->next;
		free(listptr);
	}
}


int main()
{
	struct node * head=NULL;
	struct node *temp = NULL;

	push(&head,4);
	push(&head,8);
	push(&head,2);
	push(&head,18);
	push(&head,8);
	push(&head,12);

	print(head);

	if(detectloop(head))
	{
		printf("Loop Found\n");
	}
	else
	{
		printf("No loop found\n");
	}

	middle(head);

	copy_ll(head,&temp);
	printf("The copy of the linked list\n");

	print(temp);

	free_nodes(temp);
}
