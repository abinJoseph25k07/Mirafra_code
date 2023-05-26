

#include<stdio.h>
#include<stdlib.h>

struct node 
{
	int data;
	struct node *next;
};

struct node *create(struct node *head, struct node *temp);
void print(struct node *head, struct node *temp);
struct node *reverse(struct node * head, struct node *temp);

int main()
{
	struct node *head, *temp;
	head = create(head,temp);
	print(head,temp);
	head = reverse(head,temp);
	print(head,temp);
}

struct node * create(struct node *head, struct node * temp)
{
	int n =1;
	struct node *newnode;
	head = NULL;
	while(n)
	{
		newnode = (struct node *)malloc(sizeof(struct node));
		printf("Enter any value\n");
		scanf("%d",&newnode->data);
		newnode->next = NULL;
		if(head == NULL)
		{
			head = temp = newnode;
		}
		else
		{
			temp->next = newnode;
			temp = newnode;
		}
		printf("Do you want to create a node again\n");
		scanf("%d",&n);
	}
	return head;
}

struct node * reverse(struct node *head, struct node *temp)
{
	struct node *prev, *curr;
	temp = curr = head;
	prev = NULL;
	while(temp != NULL)
	{
		temp = temp->next;
		curr->next = prev;
		prev = curr;
		curr = temp;
	}
	head = prev;
	return head;
}		 

void print(struct node *head, struct node *temp)
{
	for(temp = head; temp != NULL; temp = temp->next)
	{
		printf("%d ",temp->data);
	}
	printf("\n");
}

