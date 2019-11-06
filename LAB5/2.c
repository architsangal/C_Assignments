#include <stdio.h>


// function for sorting using Selection sort
void SelectionSort(long long int arr[])
{
	int count_cmp=0,count_swap=0;
	//count_cmp is for counting comparision and count_swap to count number of swaps

	//outer loop is for passes ==> No.of passes = length of array-1 as in last pass there is just 1 element for which sorting is useless

	long long int index;//for storing index of smallest element
	for(int i=0;i<19;i++)
	{
		index=i;
		//inner loop is for finding index of smallest element in the "left over unsorted" array
		for(int j=i+1;j<20;j++)
		{
			count_cmp++;
			if(arr[index]>=arr[j])
				index=j;
		}

		// temp is a temporary variable so as to swap the elements 
		long long int temp=arr[i];
		arr[i]=arr[index];
		arr[index]=temp;
		count_swap++;
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
	SelectionSort(arr);
	return 0;
}
