#include <stdio.h>
#include <string.h>
int main(void)
{
	char str[200];// declaring char array to store string
	int len;
	scanf("%s %d",str,&len);//inputing string and length of substring
	if(len==0 || strlen(str)<len)
	{
		printf("0");
		return 0;
	}
	else if(len<0)
		len=-len;
	char substr[len][strlen(str)-len+1];
	// array for storing substrings in columns
	for(int i=0;i<strlen(str)-len+1;i++)
	{
		for(int j=0;j<len;j++)
		{
			substr[j][i]=str[i+j];
		}
	}
	//processing for storing substrings

	int check[strlen(str)-len+1];
	for(int i=0;i<strlen(str)-len+1;i++)
		check[i]=1;
	//check is used for finding distinct strings i.e. if distinct it stores 1 else it stores 0

	for(int i=0;i<strlen(str)-len+1;i++)
	{	
		if(check[i]==1) //it has been claimed here that substr is distinct so it has to to checked 
		{	
			char substr1[len+1];
			for(int j=0;j<len;j++)
			{
				substr1[j]=substr[j][i];
			}
			substr1[len]='\0';
			//substr1 stores that string which is claimed to be distinct
			for(int j=i+1;j<strlen(str)-len+1;j++)// for comparing substring to substrings following it 
			{	
				char substr2[len+1];
				for(int k=0;k<len;k++)
				{
					substr2[k]=substr[k][j];
				}
				substr2[len]='\0';
				//for storing following substring(s)
				if(strcmp(substr1,substr2)==0)
					check[j]=0;
				//if string is same strcmp returns 0 so check of that substr is made 0
			}
		}
	}
	int c=0;
	for(int j=0;j<strlen(str)-len+1;j++)
	{
		if(check[j]==1)
			c++;
	}
	//counting the no. of distinct substr
	printf("%d",c);
}
