#include <stdio.h>
#include <stdlib.h>


//function to add two number
long double add(long double a,long double b)
{
	return a+b;
}


//function to subtraction two numbers
long double sub(long double a,long double b)
{
	return a-b;
}


//function to multiply two numbers
long double multiplication(long double a,long double b)
{
	return a*b;
}


//function to divide two number
long double divide(long double a,long double b)
{
	return a/b;
}


int main(void)
{
	//a function pointer declaration
	long double (*FuncPointer) (long double,long double);

	long double a,b;
	char ch;

	scanf("%Lf %Lf %c",&a,&b,&ch);

	//if-else used here for initialising function pointer
	if(ch=='+')
		FuncPointer=add;
	else if(ch=='-')
		FuncPointer=sub;
	else if(ch=='*')
		FuncPointer=multiplication;
	else if(ch=='/' && b!=0)// a number cannot be divided by zero
		FuncPointer=divide;
	else
		exit(0);// invalid input exit the program

	printf("%.4Lf",FuncPointer(a,b));		

	FuncPointer=NULL;

	return 0;
}
