/*************************************************************************
	> File Name: 11.9.c
	> Author: 
	> Mail: 
	> Created Time: 2020年03月02日 星期一 20时50分30秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>
void input(char *p)
{
    for(int i=0; ;i++ )
    {
        *(p+i)=getchar();
        if(*(p+i)=='\n')
        {
            *(p+i)='\0';
            break;
        }
    }
}
void delete(char *p)
{
    int t=strlen(p);
    for(int i=0;i<t;i++)
    {
        if(*(p+i)=='\t' ||*(p+i)==' ')
        {
            for(int j=i;j<t;j++)
            {
                *(p+j)=*(p+1+j);   
            }
            *(p+t-1)='\0';    //字符串的长度减少不能忘记\0
            t--;
        }
    }
}
int main(void)
{
    char ch[1000];
    input(ch);
    delete(ch);
    fputs(ch,stdout);  //putchar 输出的是字符 getchar 输出的是字符串

}
