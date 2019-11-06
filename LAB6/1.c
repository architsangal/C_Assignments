#include <stdio.h>
#include <stdlib.h>

void Printing(int*value,int n)
{
	//printing the elements
        for(int i=1;i<=n;i++)
	{
		// if condition is used so that there is no space at the end of last element and printing cursor moves to next line. 
		if(i!=n)
			printf("%d ",*(value+i-1));
		else
			printf("%d\n",*(value+i-1));
	}

	//freeing up of dynamically alloted space 
	free(value);

}

int main(void)
{
	// Inputting a number n for storing number "Number of Elements" to be input and printed.
	int n;
	scanf("%d",&n);

	// allocation of dynamic memory to pointer variable "value"
	int *value=(int*)malloc(n*sizeof(int));

	// inputting the elements
	for(int i=1;i<=n;i++)
	{
		scanf("%d",value);
		if(i!=n)
			value++;
	}

	// resetting the pointer variable "value" to first element
	for(int i=1;i<n;i++ )
                value--;

	Printing(value,n);
	return 0;

}
