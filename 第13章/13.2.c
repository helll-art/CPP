/*************************************************************************
	> File Name: 13.2.c
	> Author: 
	> Mail: 
	> Created Time: 2020年03月05日 星期四 12时00分03秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
    int ch;
    FILE *source,*destination;
    if((source=fopen(argv[1],"r"))==NULL)
    {
        printf("Can't open %s\n",argv[1]);
        exit(1);
    }
    if((destination = fopen(argv[2],"w"))==NULL)
    {
        printf("Can't open %s\n",argv[2]);
        exit(1);
    }
    while((ch=getc(source))!=EOF)
    putc(ch,source);
    fclose(source);
    fclose(destination);
    printf("copy finished\n");
    return 0;
}
