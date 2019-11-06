#include <stdio.h>
#include <string.h>
int main(void)
{
	int nos[10]; // an array for storing numbers
	for(int i=0;i<10;i++) //inputing numbers
		scanf("%d,",&nos[i]);  //using "," as a delimiter
	for(int i=9;i>=0;i--) // printing in reverse order
		if(i==0)
			printf("%d",nos[i]); // print last element without any space
		else
			printf("%d ",nos[i]); //print all other elements using space
	return 0;
}
