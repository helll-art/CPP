/*************************************************************************
	> File Name: 11.3.c
	> Author: 
	> Mail: 
	> Created Time: 2020年02月21日 星期五 22时43分04秒
 ************************************************************************/


#include<stdio.h>
void input(char *p,int n)
{
    for(int i=0;i<n;i++)
    {
        *(p+i)=getchar();
        if(*(p+i)==' ' || *(p+i)=='\n'  || *(p+i)=='\t')
        {
            *(p+i)='\0';
            break;
        }
    }
}
int main(void)
{
    char a[81];
    printf("请输入字符，获取第一个单词：");
    input(a,81);
    fputs(a,stdout );
}
