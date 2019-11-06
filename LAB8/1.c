#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char*itob(int n,char*s,int b)
{
	int i=0;
	while(n>=1)
	{
		int r=n%b;// finding the remainder
		if(r>=0 && r<=9)
			s[i]=(char)(r+'0');//storing digits as character digits using type casting
		else
		  s[i]=(char)(r+-10+'a');//storing letters as characters using type casting
		n=n/b;//updating the value of n for next iteration
		i++;
	}
	s[i]='\0';
	return s;//returning pointer "s" which has the required output but in reverse order
}

int main(void)
{
	int n,b;
	scanf("%d %d",&n,&b);

	// for Invalid Input
	if(n<0 || b<1 || b>32)
		return 0;

	//pointer declaration
	char *s=(char*)malloc(10000);

	//changing value and storing it in pointer
	s=itob(n,s,b);

	//printing char pointer in reversing order
	for(int i =strlen(s)-1;i>=0;i--)
	        printf("%c",s[i]);

	free(s);
	return 0;
}
    
