/*************************************************************************
	> File Name: 11.1.c
	> Author: 
	> Mail: 
	> Created Time: 2020年02月21日 星期五 22时20分14秒
 ************************************************************************/

#include<stdio.h>
void input(char *p,int n)
{
    for(int i=0;i<n;i++)
    {
        *(p+i)=getchar();

    }
    *(p+n)='\0';
}
int main(void)
{
    char a[81];
    int n;
    printf("输入字符串长度：");
    scanf("%d",&n);
    getchar();
    input(a,n);
    fputs(a,stdout);
}
