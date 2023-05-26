#include<stdio.h>


struct node
{
	int num;
	float a;
	double c;
};

void main()
{
	struct node *ad=NULL;
	ad++;
	printf("size of structure is %d\n",ad);
}

