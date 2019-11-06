#include <stdio.h>
int main(void)
{
	int nos[10]; // an array for storing numbers
	for(int i=0;i<10;i++) //inputing numbers
		scanf("%d,",&nos[i]);  //using "," as a delimiter
	int search;
	scanf("%d",&search);
	int count=0,f=0; // count is to count number of comparisons and f is a flag variable
	for(int i=0;i<10;i++)
	{
		count++;
		if(nos[i]==search)
		{
			f=1;
			break;
		}
	}
	printf("%d %d",f,count);
}
