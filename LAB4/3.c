#include <stdio.h>
int main(void)
{
	int nos[10],x; //I want to use "search" as variable but as it was mentioned in question I used "x"
	for(int i=0;i<10;i++) // for input of numbers    nos ==> numbers
		scanf("%d,",&nos[i]);
	scanf("%d",&x);  // x is for no. to be searched
	int f=0;  // flag variable
	int begin=0;  // index of beginning of search
	int end=9;  // index of ending of search
	int mid;  // for dividing the search to half      mid ==> index 
	int count=0;  //counts the number of comparisons
	while(begin<=end)  // if no. is not found "begin > end"
	{
		mid=(begin+end)/2; // mid term of 10 terms is 5th no.i.e. index 4(  (0+9)/2  (int/int) )
		count++;
		if(x==nos[mid])
		{
			f=1;// number is found
			break;// no need of further iterations and for the logic that if number is not found "begin > end"
		}
		else if(x>nos[mid])  // second half of the searching is to be considered
			begin=mid+1;
		else // if(x<nos[i])  // first half of the searching is to be considered
			end=mid-1;
	}
	printf("%d %d",f,count);
}
