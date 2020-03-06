/*************************************************************************
	> File Name: file.c
	> Author: 
	> Mail: 
	> Created Time: 2020年03月06日 星期五 11时25分03秒
 ************************************************************************/
#include<stdio.h>
#include<string.h>
#define SLEN 81
#define BUFSIZE 1024
void append(FILE * ,FILE *);
int main(void)
{
    int files;
    FILE *fa,*fs;
    char file_app[SLEN],file_src[SLEN];
    printf("请输入要追加的文件名：");
    fgets(file_app,SLEN,stdin);
    fa=fopen(file_app,"a");
    if(fa == NULL)
    {
        printf("打开追加文件失败。\n");
        return 0;
    }
    else if(setvbuf(fa,NULL,_IOFBF,BUFSIZE)!=0)
    {
        printf("分配输出缓冲区失败。\n");
        return 0;
    }
    printf("请输入要添加的文件名：");
    while(fgets(file_src,BUFSIZE,stdin) && file_src[0]!='\0')
    {
        fs=fopen(file_src,"r");
        if(fs == NULL)
        {
            printf("打开添加文件失败。\n");
            return 0;
        }
         if(strcmp(file_src,file_app) == 0)
        {
            printf("追加文件和添加文件不能为同一个。\n");
            return 0;
        }
        else if(setvbuf(fs,NULL,_IOFBF,BUFSIZE)!=0)
        {
            printf("分配输入缓冲区失败！\n");
            return 0;
        }
        else 
        {
            append(fa,fs);
            files++;
            fclose(fs);
        }
    }
    printf("添加文件共为%d个\n",files);
    fclose(fa);
    
}
void append(FILE *fa,FILE *fs)
{
    int bytes;
    char temp[BUFSIZE];
    while((bytes=(fread(temp,sizeof(char),BUFSIZE,fs)))>0)
    {
        fwrite(temp,sizeof(char),BUFSIZE,fa);
    }
}
