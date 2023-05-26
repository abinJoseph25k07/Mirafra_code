#include<stdio.h>
#define SIZE 10
/*

int main()
{
	int arr[SIZE]={34,22,54,22,54,54,64,21,34,54};
	int count,i,j,rep,max=0;
	for(i=0;i<SIZE;i++)
	{
		count =0;
		for(j=0;j<SIZE;j++)
		{
			if(arr[i] == arr[j])
			{
				count++;
			}
		}
		if(count > max)
		{
			rep = arr[i];
			max = count;
		}	
	}
	printf("The maximum repeating element is %d and count is %d\n",rep,max);
}

*/

int main()
{
	int arr[SIZE],freq[SIZE],i,j,max_count,max_index;
	for(i=0; i<SIZE; i++)
	{
		scanf("%d",&arr[i]);
		freq[i] = 0;
	}

	for(i=0; i<SIZE; i++)
	{
		for(j=i+1; j<SIZE; j++)
		{
			if(arr[i] == arr[j])
			{
				freq[i]++;
			}
		}
	}
	
	max_count = freq[0];
	max_index = 0;
	for(i=1; i<SIZE; i++)
	{
		if(freq[i] > max_count)
		{
			max_count = freq[i];
			max_index = i;
		}
	}
	printf("The maximum repeating element is %d with frequency %d\n",arr[max_index],max_count+1);
}
