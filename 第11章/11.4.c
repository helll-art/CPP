/*************************************************************************
	> File Name: 11.4.c
	> Author: 
	> Mail: 
	> Created Time: 2020年02月21日 星期五 22时52分17秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>
void input(char *p )      //回车标志字符串输入的结束
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
char  search(char *a,char p)
{
    int t=strlen(a);
    int f=0;
    for(int i=0;i<t;i++)
    {
        if(*(a+i)==p)
        {
            f=1;
            return *(a+i);
        }

    }
    if(f==0)
        return ' ';


}
int main(void)
{
    char a[1000];
    char ch;
    printf("请输入一个字符串，当输入回车时结束输入：");
    input(a);
    printf("请输入要查找的字符：");
    scanf("%c",&ch);
    printf("%c！！！\n",search(a,ch));

}
