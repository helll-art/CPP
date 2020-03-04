/*************************************************************************
	> File Name: 11.5.c
	> Author: 
	> Mail: 
	> Created Time: 2020年02月21日 星期五 23时03分41秒
 ************************************************************************/
#include<stdio.h>
#include<string.h>
void input (char *p)
{
    for(int i=0;;i++)
    {
        *(p+i)=getchar();
        if(*(p+i)=='\n')
        {
            *(p+i)='\0';
            break;
        }
    }
}
int is_within(char a,char *p)
{
    int t=strlen(p);
    for(int i=0;i<t;i++)
    {
        if(*(p+i)==a)
            return 1;
    }
    return 0;
}
int main(void)
{
    char a[1000];
    char c;
    printf("输入字符串,回车标志字符串结尾：");
    input(a);
    printf("输入要查找的字符：");
    scanf("%c",&c);
    if(is_within(c,a))
        printf("YES\n");
    else printf("NO\n");
}
