#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* concat(char*str1,char*str2)
{

	//dynamically allocation of memory to char pointer to store string which is concatenation of two given strings
	char *str=(char*) malloc(strlen(str1)+strlen(str2)+1);// "+1" is to store '\0' at the end of string.

	// for loop to copy first string to "concat string variable".
	for(int i=0;i<strlen(str1);i++)
			str[i]=str1[i];

	// for loop to copy second string to "concat string variable" after first string.
	for(int i=0;i<strlen(str2);i++)
			str[i+strlen(str1)]=str2[i];

	// Storing '\0' at last of string
	str[strlen(str1)+strlen(str2)]='\0';

	return str;

}

int main(void)
{
	//dynamically allocation of memory to TWO char pointers
	char *str1=(char*) malloc(256*sizeof(char));
	scanf("%s",str1);
	char *str2=(char*) malloc(256*sizeof(char));
	scanf("%s",str2);

	char* str=concat(str1,str2);
	printf("%s",str);

	//freeing up of dynamically alloted space
	free(str1);
	free(str2);
	free(str);
	return 0;

}
