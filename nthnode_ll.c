#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};

void push( struct node ** head_ref, int new_data)
{
	struct node * newnode =(struct node *)malloc(sizeof(struct node));
	newnode->data = new_data;
	newnode->next = (*head_ref);
	(*head_ref) = newnode;
}

struct node * nthnode(struct node * head_ref, int num)
{
	if(head_ref == NULL)
	{
		return NULL;
	}

	struct node * ptr1,*ptr2;
	ptr1 = head_ref;
	ptr2 = head_ref;
	int count=0;

	while(count < num)
	{
		count++;
		if((ptr1 = ptr1->next) == NULL)
		{
			return NULL;
		}
	}

	while((ptr1=ptr1->next) != NULL)
	{
		ptr2 = ptr2->next;
	}
	return ptr2;
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

int main()
{
	int num;
	struct node * head = NULL;
	struct node * temp;

	push(&head,3);
	push(&head,56);
	push(&head,43);
	push(&head,2);
	push(&head,12);

	print(head);

	printf("Enter the node you want to find\n");
	scanf("%d",&num);

	temp =nthnode(head,num);
	printf("The %d th node is %d\n",num,temp->data);
}
