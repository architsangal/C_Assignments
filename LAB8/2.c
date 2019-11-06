#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int strend(char *s,char *t)
{

	int f=1,i;// f is a flag variable
	for(i=0;i<strlen(t);i++)
	{
		if(s[strlen(s)-i-1]!=t[strlen(t)-1-i])//Checking the characters from the end of the the two substing
		{
			f=0;// if any of the character is not equal then make f=0 and break the "loop"
			break;
		}
	}
	return f;
}

int main(void)
{

	//dynamically allocating memory to pointers
	char *s=(char*)malloc(257);
	char *t=(char*)malloc(257);

	scanf("%s %s",s,t);

	int result=strend(s,t);

	if(result==1)
	        printf("%s",t);
	else
	        printf("0");

	// freeing up the pointers
	free(s);
	free(t);

	return 0;
}
