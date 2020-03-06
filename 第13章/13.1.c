/*************************************************************************
	> File Name: 13.1.c
	> Author: 
	> Mail: 
	> Created Time: 2020年03月05日 星期四 10时45分06秒
 ************************************************************************/
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int ch;
    FILE *fp;
    unsigned long count = 0;
    char filename[256];
    printf("Please enter the filename:");
    scanf("%s",filename);
    if((fp = fopen(filename,"r"))== NULL)
    {
        printf("Can't not open %s\n",filename);

    }
    while((ch=getc(fp))!=EOF)
    {
        putc(ch,stdout);
        count++;
    }
    fclose(fp);
    printf("File %s has %lu characters\n",filename,count);
}
