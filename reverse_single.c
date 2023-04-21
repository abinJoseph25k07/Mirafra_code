#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};

struct node *create(struct node *newnode, struct node *head);

void display(struct node *head);


int main()
{
	struct node *newnode, *head;
	head = create(newnode,head);
	display(head);
}

struct node *create(struct node *newnode, struct node *head)
{
	int choice =1;
	struct node *temp;
	head = 0;
	while(choice)
	{
		newnode =(struct node*)malloc(sizeof(struct node*));
		printf("Enter any value\n");
		scanf("%d",&newnode->data);
		newnode->next = 0;
		if(head == 0)
		{
			head = temp = newnode;
		}
		else
		{
			temp->next = newnode;
			temp = newnode;
			newnode->next = 0;
		}
		printf("Do you want to create another one\n");
		scanf("%d",&choice);
	}
	printf("========head%d\n",head->data);
	return head;
}

void display(struct node *head)
{
	struct node *temp;
        temp = head;
	printf("---------------%d\n",head->data);
	while(temp !=0)
	{
		printf("%d ", temp->data);
		temp = temp->next;
	}
	printf("\n");
}

