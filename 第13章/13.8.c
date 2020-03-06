/*************************************************************************
	> File Name: 13.8.c
	> Author: 
	> Mail: 
	> Created Time: 2020年03月06日 星期五 15时32分07秒
 ************************************************************************/

#include<stdio.h>
int main(void)
{
    FILE *fp;
    char word[100];
    printf("输入文件名并创建：");
    scanf("%s",word);
    fp=fopen(word,"a+");
    while((fgets(stdin,"%s",word))!=NULL)
    {
        fprintf(fp,"%s",word);
    }
}
