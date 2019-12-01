#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    FILE *final_file=fopen("final.txt","w");
    FILE *fp;
    fp = fopen("file1.txt","r");
    char ch=fgetc(fp);
    while(ch!=EOF)
    {
        fputc(ch,final_file);
        ch=fgetc(fp);
    }
    fclose(fp);
    fp = fopen("file2.txt","r");
    ch=fgetc(fp);
    while(ch!=EOF)
    {
        fputc(ch,final_file);
        ch=fgetc(fp);
    }
    fclose(fp);
    fclose(final_file);
    final_file=fopen("final.txt","r");
    ch=fgetc(final_file);
    while(ch!=EOF)
    {
        printf("%c",ch);
        ch=fgetc(final_file);
    }
    return 0;
}