/*************************************************************************
	> File Name: 13.0.c
	> Author: 
	> Mail: 
	> Created Time: 2020年03月05日 星期四 20时48分35秒
 ************************************************************************/

#include<stdio.h>
int main(void)
{
    int ch;
    char filename[50];
    FILE *fp;
    printf("打开文件，并打印文件内容：");
    scanf("%s",filename);
    fp=fopen(filename,"r");
    if(fp == NULL)
    {
        printf("打开文件失败!\n");
        return 0;
    }
    while((ch=getc(fp))!=EOF) //定义ch为整形是因为EOF == -1 并且没有
    {                         //字符的ascii为负数，
        putc(ch,stdout);             //putc为输出函数 getc为输入函数，并赋值给ch
    }
    fclose(fp);
}
