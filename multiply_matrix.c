#include<stdio.h>


void main()
{
	int i,j,l;
	int arr1[][3]={{1,2,3},{4,5,6},{7,8,9}}, arr2[][3]={{9,8,7},{6,5,4},{3,2,1}},arr[3][3];
	for(i=0; i<3; i++)
	{
		for(j=0; j<3;j++)
		{
			arr[i][j] = 0;
			for(l=0; l<3; l++)
			{
				arr[i][j] += arr1[i][l] * arr2[l][j];
			}
		}
	}

	printf("The multipled matrix is n\n");
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
}
