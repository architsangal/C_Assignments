#include<stdio.h>
#include<stdarg.h>
#include<string.h>

void minprint(char *fmt, ... )
{
    va_list va; //  "va" is a varialbe of type va_list
    va_start(va,fmt);
    int i=0;
    while(fmt[i] != '\0')
    {
        if(fmt[i] == '%')
        {
            if(fmt[i+1] == '%')
                putchar('%');
            else if(fmt[i+1] == 'd')
                {
                    // if value to be printed is integer

                    int c=0;
                    char arr[1000];
                    int j=0;
                    int number=va_arg(va,int);

                    if(number<0)// if number is negative make it positive and flag this statement using flag variable.
                    {
                        number = -number;
                        c=1;
                    }

                    while(number != 0)
                    {
                        arr[j]=(char)(number%10+'0');
                        j++;
                        number = number/10;
                    }
                    arr[j]='\0';

                    if( c==1 )
                        putchar('-');

                    for(int k=strlen(arr)-1;k>=0;k--)
                    {
                        putchar(arr[k]);
                    }
                }
            else if(fmt[i+1] == 'c')
                putchar((char)(va_arg(va,int)));
            i++;
        }
        else
        {
            putchar(fmt[i]);
        }
        i++;
    }
    va_end(va);
}
int main(void)
{
    minprint("%d\t%c\n",2367, 'a');
    minprint("%c\n",'a');
    minprint("it is an int ==> %d\n",5);
    minprint("%d is an int\n",5);
    minprint("it is known that %d and %c are int and char respectively\n",5,'a');
    minprint("END OF ALL TEST CASES\n");
}
