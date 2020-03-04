/*************************************************************************
	> File Name: 11.2.c
	> Author: 
	> Mail: 
	> Created Time: 2020年02月21日 星期五 22时30分28秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
void input(char *p,int n)
{
    int i=0;
    for ( i=0;i<n;i++)
    {
        *(p+i)=getchar();
        if(*(p+i)==' ' || *(p+i)=='\n' || *(p+i)=='\t')
        {
            *(p+i)='\0';
            break;       //使用break和exit效果不同 注意区分
        }
    }
}
int main(void)
{
    int n;
    char a[81];
    printf("输入字符串长度：");
    scanf("%d",&n);
    getchar();
    input(a,n);
    fputs(a,stdout);

}
