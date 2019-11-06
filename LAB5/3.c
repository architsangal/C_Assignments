#include <stdio.h>
int c=0;
// add the two sub parts (left and right) of array which are sorted within themselves and putting in new array such that it is sorted
void Merge(long long int arr[],int begin,int mid,int end)
{
		c++;
		int num_left=mid-begin+1,num_right=end-mid;
		long long int left[num_left],right[num_right];
		// length of left ==> mid - begin + 1
		// length of right ==> (end - begin + 1)- mid <== {Total terms - terms in left}
		// total elements ==> end - begin + 1
		

		//storing set 1 in right[]
		int i=0;
		while(i<num_right)
		{
			right[i]=arr[mid+1+i];
			i++;
		}

	//storing set 2 in left[]
		i=0;
		while(i<num_left)
		{
			left[i]=arr[begin+i];
			i++;
		}

		i=0;
		int j=0,k=begin;

		//sorting
		while(i<num_left && j<num_right)
		{
			if(right[j]<=left[i])
			{
				arr[k++]=right[j++];
			}	
			else
			{
				arr[k++]=left[i++];
			}	
		}

		// for left over element
		// only one of the following loops will be executed

		while(j<num_right)
		{
			arr[k++]=right[j++];
		}
		while(i<num_left)
		{
			arr[k++]=left[i++];
		}
		
	
}
// this a function to divide array till there are only sets of "1 element"
void MergeSort(long long int arr[],int begin,int end)
{
	// if begin == end then there is is only one element in sub division so in this case function should return control back to calling function without any change
	if(begin<end)
	{
		int mid=(end+begin)/2;

		//use of recurtion
		MergeSort(arr,begin,mid);
		MergeSort(arr,mid+1,end);

		//Merge function is executed only if the two set are sorted (subcase of it is if both of the sets contain 1 element each which is base case for 'back tracking')
		Merge(arr,begin,mid,end);
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

	//we are able to do this i.e. without returning any value as array is call by reference
	MergeSort(arr,0,length-1);
	//printing the sorted elements of array
	for(int i=0;i<length;i++)
	{

		// if condition is used here to so that there is no space after last element and control goes to next line
		if(i!=length-1)
			printf("%lld ",arr[i]);
		else
			printf("%lld\n",arr[i]);			

	}
	printf("%d\n",c);

	// we return 0 to signal that code execution is completed successfully
	return 0;

}
