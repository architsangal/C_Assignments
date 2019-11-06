#include <stdio.h>

int iteration=0; // to count iterations of Quick Sort function
int pivot_last_elmnt;// to store PIVOT INDEX OF LAST ELEMENT

int partition(long long int arr[],int begin,int end)
{

	long long int pivot=arr[end];// taking last element as the pivot and storing it in variable "pivot"
	int i = begin;  // index of first bigger element than pivot
	long long int temp; // temp variable is used to swap the elements
/*
	Here, we are are swaping the smaller elements than pivot with first bigger element (than pivot) ==> whose index is stored in 
	variable "i"
*/ 
	// we don't have to compare last element with pivot as they are the same so run loop till " < end "
	for (int j = begin; j < end; j++) 
	{ 

		// if a[j] is smaller than the pivot 
		if (arr[j] < pivot) 
	        { 

			//swap the smaller number (than pivot) ==> arr[j]   ;    with larger number (than pivot) ==> arr[i]
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
	 		i++;    // incresing index of bigger elements 

        	} 

    	}

	// swaping the pivot element to the appropriate place
	temp=arr[i];
	arr[i]=arr[end];
	arr[end]=temp;

    	return i;//returning the index of pivot

}

// to divide the array about pivot till it reaches to elemental for of 1 element
void QuickSort(long long int arr[],int begin,int end)
{

	if(begin<end)// if the left or right of pivot 
	{
		iteration++;
		// for rearranging the elements such that the elements before pivot are less than the pivot element and numbers greater than pivot element are after pivot element and to return index of pivot element

		int pivot=partition(arr,begin,end);

		// storing the pivot index of last element of input array
		if(iteration==1)
			pivot_last_elmnt=pivot;

		//recursion
		QuickSort(arr,begin,pivot-1);
		QuickSort(arr,pivot+1,end);
		
	}

}

int main(void)
{
	//number of elements in array which are to be sorted
	int length;
	scanf("%d",&length);

	//inputting the array
	long long int arr[length];
	for(int i=0;i<length;i++)
	{
		scanf("%lld,",&arr[i]);
	}

	//we are able to do this i.e. without returning any value as "array is call by reference"
	QuickSort(arr,0,length-1);

	//printing the sorted elements of array
	for(int i=0;i<length;i++)
	{

		// if condition is used here to so that there is no space after last element and control goes to next line
		if(i!=length-1)
			printf("%lld ",arr[i]);
		else
			printf("%lld\n",arr[i]);			

	}

	//printing pivot index of last element in the input array
	printf("%d\n",pivot_last_elmnt);

	// we return 0 to signal that code execution is completed successfully
	return 0;

}
