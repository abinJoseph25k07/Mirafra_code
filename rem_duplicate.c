// Removing dupliates in sorted array
/*
#include<stdio.h>
#define SIZE 10

void rm_duplicate(int a[])
{
	int i,j=0,arr_size;
	printf("Original array\n");
	for(i=0;i<SIZE;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
	for(i=1;i<SIZE;i++)
	{
		if(a[i] != a[j])
		{
			j++;
			a[j] = a[i];
		}
	}

	arr_size = j+1;
	printf("The new array\n");
	for(i=0; i<arr_size;i++)
	{
		printf("%d ",a[i]);
	}
	
	printf("\n");
}


void main()
{
	int arr[SIZE] = {1,2,3,3,4,5,6,6,7,8};
	rm_duplicate(arr);
}
---------------------------------------------------------------------*/

//Removing duplicates in unsorted array
#include<stdio.h>
#define SIZE 10

void rm_dup(int a[])
{
	int i,j,k=0,arr_size;
	printf("Original array\n");
	for(i=0;i<SIZE;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");

	for(i=0; i<SIZE-k; i++)
	{
		for(j=i+1; j<SIZE-k; j++)
		{
			if(a[i] == a[j])
			{
				k++;
				a[j] = a[j+1];
				j--;
			}
		}
	}
	
	arr_size = SIZE-k;

	printf("New array\n");
	for(i=0;i<arr_size; i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
}

void main()
{
	int arr[SIZE] = {1,5,8,4,3,9,2,1,1,5};
	rm_dup(arr);
}
