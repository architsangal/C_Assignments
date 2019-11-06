#include <stdio.h>


// function for sorting using bubble sort
void BubbleSort(long long int arr[])
{
	int count_cmp=0,count_swap=0;
	//count_cmp is for counting comparision and count_swap to count number of swaps

	//outer loop is for passes ==> No.of passes = length of array-1 as in last pass there is just 1 element for which sorting is useless
	for(int i=0;i<19;i++)
	{
		//inner loop is for comparision of 2 terms in neighbourhood(adjacent)
		for(int j=0;j<19-i;j++)
		{
			count_cmp++;
			if(arr[j]>arr[j+1])
			{
				count_swap++;

				// if previous element is bigger then the next element swap them
				// temp is a temporary variable so as to swap the elements 

				long long int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;

			}
		}
	}

	//printing the sorted elements of array
	for(int i=0;i<20;i++)
	{
		// this 'if - else' is for avoiding space(" ") after last element
		if(i!=19)
			printf("%lld ",arr[i]);
		else
			printf("%lld",arr[i]);
	}

	//printing the no of swap and no of comparisions
	printf("\n%d %d\n",count_swap,count_cmp);
}

int main(void)
{
	long long int arr[20];
	for(int i=0;i<20;i++)
	{
		scanf("%lld,",&arr[i]);
	}
	BubbleSort(arr);
	return 0;
}
