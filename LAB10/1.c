#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
    //argc stores the no. of argument
    //note that first parameter is the name of the file so actual useful index starts from 1 till argc-1
    //also note that the argv is an arr of pointers

    int sum=0;
    for(int i=1;i<argc;i++)
        sum += atoi(argv[i]);

    printf("%d %d\n",argc-1,sum);
    return 0;
}