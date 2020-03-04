/*************************************************************************
	> File Name: 11.8.c
	> Author: 
	> Mail: 
	> Created Time: 2020年02月22日 星期六 00时08分10秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>
void input(char *p)
{
    for(int i=0; ; i++)
    {
        *(p+i)=getchar();
        if(*(p+i)=='\n')
        {
            *(p+i)=='\0';
            break;
        }
    }
}
int main(void)
{
    char s[10000];
    input(s);
    int t=strlen(s);
    for(int i=t-2;i>=0;i--)      //i从t-2开始是为了滤去回车
    {
        putchar(s[i]);
    }
    putchar('\n');

}
