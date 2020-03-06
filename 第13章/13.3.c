/*************************************************************************
	> File Name: 13.3.c
	> Author: 
	> Mail: 
	> Created Time: 2020年03月05日 星期四 20时27分32秒
 ************************************************************************/

#include<stdio.h>
int main(int argc,char *argv[])
{
    char filename[40];
    printf("请输入文件名：");
/*    scanf("%s",filename);*/
    FILE *fp;
    char ch;
    fp=fopen(argv[0],"r+");
    while((ch=getc(fp))!=EOF)   //
    {
        if(ch>='a' && ch<='z')
            ch=ch-32;
        putc(ch,stdout);
    }
    fclose(fp);
    return 0;
}
