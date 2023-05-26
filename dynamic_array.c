#include<stdio.h>
#include<stdlib.h>

int *myarray = malloc(no_of_elements * sizeof(int));

int **myarray =(int **) malloc(no_of_elements * sizeof(int *));
for(int i=0; i<no_of_elements; i++)
{
	myarray[i] = malloc(no_of_columns * sizeof(int));
}

int ***myarray = (int ***) malloc(no_of_elements * size0f(int **));
for(int i=0; i<no_of_elements; i++)
{
	myarray[i] = malloc(no_of_columns * sizeof(int));
}

// Can we initialize a pointer inside a function


char *myfunction()
{
	char * temp = "string";
	return temp;
}

void main()
{
	puts(myfunction());
}
