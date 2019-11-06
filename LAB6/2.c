#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int String_cmp(char*str1,char*str2)
{
	//f is a flag variable
	int f=0;

	//if strings are "arc" and "arch" (i.e. if one of string is substring of other) then condition "i<=strlen(str1)" is required as in last iteration it will compare '\0' with 'h'

	for(int i=0;i<=strlen(str1);i++)
		//comparing each character one by one
		if(*(str1+i)!=*(str2+i))
		{
			//value of flag is changed from 0 to 1 to check that ==> "if" block has been executed or not
			f=1;
			// if this "if" executed atleast once then we get to know that the strings are not equal.
			break;
		}
	return f;

}
int main(void)
{

	//dynamically allocation of memory to TWO char pointers
	char *str1=(char*) malloc(256*sizeof(char));
	scanf("%s",str1);
	char *str2=(char*) malloc(256*sizeof(char));
	scanf("%s",str2);
	
	// printing the desired output.
	if(String_cmp(str1,str2)==1)
		printf("1");
	else
		printf("0");

	//freeing up of dynamically alloted space
	free(str1);
	free(str2);
	return 0;
}
