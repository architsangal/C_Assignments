#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    system("date > file1.txt");
    system("sleep 5");
    system("date > file2.txt");
    FILE *fp;
    fp = fopen("file1.txt","r");
    char ch=fgetc(fp);
    while(ch!=EOF)
    {
        printf("%c",ch);
        ch=fgetc(fp);
    }
    fclose(fp);
    fp = fopen("file2.txt","r");
    ch=fgetc(fp);
    while(ch!=EOF)
    {
        printf("%c",ch);
        ch=fgetc(fp);
    }
    fclose(fp);
}
