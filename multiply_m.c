#include<stdio.h>

void main()
{
	int arr1[3][3]={{2,3,4},{5,6,7},{9,5,3}}, arr2[3][3]={{9,8,7},{4,5,6},{2,5,4}}, arr[3][3],i,j,l;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			arr[i][j] =0;
			for(l=0;l<3;l++)
			{
				arr[i][j] += arr1[i][l] * arr2[l][j];
			}
		}
	}

	printf("The multiplied array is\n");
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	printf("Matrix addititon\n");
	for(i=0;i<3; i++)
	{
		for(j=0;j<3;j++)
		{
			arr[i][j] = arr1[i][j] + arr2[i][j];
		}
	}
	
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}

}

