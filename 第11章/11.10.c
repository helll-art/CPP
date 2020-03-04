/*************************************************************************
	> File Name: 11.10.c
	> Author: 
	> Mail: 
	> Created Time: 2020年03月02日 星期一 21时04分31秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
    char ch[10][91];   //需要定义为全局变量
    char *p[10];       //防变函数的调用
    int i=0;
void menu(void);
void length(char **pp,int n);
void first(char **pp,int n);
int first_word(char *p);
void ascii(char **pp,int n);    //一级指针不能传递多个字符串 
void output(char **p,int n);    //所以只能用指针数组传参 ，二级指针接收
int main(void)
{
    printf("请输入10个字符串进入菜单选项：\n");
    printf("若需要强制停止，请输入/*-：");
    while(i<10)//将i定义为全局变量 方便函数调用，并且可
    {          //以直接判断存入的字符串数量
    
        fgets(ch[i],91,stdin);
        if(strcmp(ch[i],"/*-\n")==0)
            break;
        p[i]=ch[i];
        i++;
    }
    menu();

}
void menu(void)
{
    printf("**************************************************\n");
    printf("*  1.输出初始化字符串列表。                      *\n");
    printf("*  2.按ASCII顺序输出字符串。                     *\n");
    printf("*  3.按长度递增顺序输出字符串。                  *\n");
    printf("*  4.按字符串中第一个单词长度输出字符串。        *\n");
    printf("*  5.退出。                                      *\n");
    printf("**************************************************\n");
    printf("请选择要使用的项目：\n");
    int pos;
    scanf("%d",&pos);
    switch(pos)
    {
        case 1:
            output(p,i);
            break;
        case 2:
            ascii(p,i);
            output(p,i);
            break;
        case 3:
            length(p,i);
            output(p,i);
            break;
        case 4:
            first(p,i);
            output(p,i);
            break;
        case 5:
            printf("退出程序！\n");
            break;
        default :
            break;
    }
}
void output(char **pp,int n)
{
    for(int i=0;i<n;i++)
    {
        fputs(*(pp+i),stdout);
    }
}
void ascii(char **pp,int n)
{
    char *t;        //因为×pp 代表的是指针  要进行交换只能用指针 不能用其他类型
    for(int i=0;i<n;i++) 
    {
        for(int j=i;j<n;j++)
        {
            if(strcmp(pp[i],pp[j])<0)
            {
                t=pp[i];//strcpy(t,pp[i])             不     类型不同
                pp[i]=pp[j];//strcpy(pp[i],pp[j])     可
                pp[j]=t;  //strcpy(pp[j],t)           取 
            }
        }

    }
}
void length(char **pp,int n)
{
    char *t;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            if(strlen(pp[i])>strlen(pp[j]))
            {
                t=pp[i];
                pp[i]=pp[j];
                pp[j]=t;
            }
        }
    }
}
int  first_word(char *q)
{
    for(int i=0; ;i++)
    {
        if(*(q+i)==' '|| *(q+i)== '\t')
            return i;
    }

}
void first(char **pp,int n)
{
    char *t;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            if(first_word(pp[i])>first_word(pp[j]))
            {
                
                t=pp[i];
                pp[i]=pp[j];
                pp[j]=t;
            }
        }
    }
}
