/*************************************************************************
	> File Name: 11.7.c
	> Author: 
	> Mail: 
	> Created Time: 2020年02月21日 星期五 23时36分29秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>
void input(char *p)           //获取字符串
{
    for(int i=0; ; i++)
    {
        *(p+i)=getchar();
        if(*(p+i)=='\n')
        {
            *(p+i)='\0';
            break;
        }
    }
}
int  string_in(char *s1,char *s2)
{
    int f=0;
    int t1=strlen(s1);
    int t2=strlen(s2);
    for(int i=0;i<t1;i++)   
    {
        if(*s2==*(s1+i))       //直到s2的第一个字母和s1中的某一个相同才进入循环
        {
            for(int j=0;j<t2;j++)
            {
                if(*(s2+j)==*(s1+i+j))     //对s2的字母逐个与s1比较
                {
                    f=1;
                }
                else 
                {
                    return 0;
                }
            }
        }
    }
    if(f==1)
        return 1;
}
int main(void)
{
    char s1[1000],s2[1000];
    input(s1);
    input(s2);
    if(string_in(s1,s2)==1)
        printf("YES\n");
    else     printf("NO\n");
}
