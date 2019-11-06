#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
    //if the input is not correct terminate the program without doing anything
    if(argc!=4)
        return 0;

    //argc stores the no. of argument
    //note that first parameter is the name of the file so actual useful index starts from 1 till argc-1
    //also note that the argv is an arr of pointers

    float num1=atoi(argv[1]);
    float num2=atoi(argv[2]);
    char operator=*argv[3];

    if(operator=='+')
        printf("%.2f",num1+num2);
    else if(operator=='-')
        printf("%.2f",num1-num2);
    else if(operator=='*')
        printf("%.2f",num1*num2);
    else if(operator=='/' && num2!=0)
        printf("%.2f",num1/num2);
    
    return 0;
}