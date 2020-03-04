/*************************************************************************
	> File Name: 11.15.c
	> Author: 
	> Mail: 
	> Created Time: 2020年03月03日 星期二 12时23分19秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>
#include<ctype.h>
char str[81];
void menu(void);
void output(char *p);
void upper(char *p);
void lower(char *p);
int main(void)
{
    printf("请输入字符串：");
    fgets(str,81,stdin);
    menu();

}
void menu(void)
{
    printf("**********************************\n");
    printf("*   p.按照原样显示输入:          *\n");
    printf("*   u,把输入全部转化为大写：     *\n");
    printf("*   l.把输入全部转化为小写:      *\n");
    printf("**********************************\n");
    char ch;
    scanf("%c",&ch);
    switch(ch)
    {
        case 'p':
            output(str);
            break;
        case 'u':
            upper(str);
            output(str);
            break;
        case 'l':
            lower(str);
            output(str);
            break;
        default:
            break;
    }
}
void output(char *p)
{
    fputs(p,stdout);

}
void upper(char *p)
{
    for(int i=0;i<strlen(p);i++)
    {
        if(*(p+i)>='a' && *(p+i)<='z')
            *(p+i)=*(p+i)-32;
    }
}
void lower(char *p)
{
    for(int i=0;i<strlen(p);i++)
    {
        if(*(p+i)>='A' && *(p+i)<='Z')
            *(p+i)=*(p+i)+32;
    }
}
