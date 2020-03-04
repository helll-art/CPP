/*************************************************************************
	> File Name: 11.12.c
	> Author: 
	> Mail: 
	> Created Time: 2020年03月03日 星期二 10时58分21秒
 ************************************************************************/

#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main(void)
{
    char temp;
    char ch[81];
    char str[81][81];
    fgets(ch,81,stdin);
    int len=strlen(ch);
    for(int i=0;i<len/2;i++)
    {
        temp=ch[i];
        ch[i]=ch[len-1-i]; //ch[len]=='\0'  倒序完 无法输出字符串
        ch[len-1-i]=temp;   //因为倒置后ch[0]='\0'
    }
    int k=0,s=0;
    int num[81]={0};
    for(int i=0;i<len;i++ )
    {
        if(isspace(ch[i]))
        {
            num[s]=i;
            s++;
            for(int j=0;j<k/2;j++)
            {
                temp=ch[num[s]+j];
                ch[num[s]+j]=ch[num[s]+k-1-j];
                ch[k-1-j]=temp;
            }
            k=0;
        }
        k++;
    }
    fputs(ch,stdout);
    printf("\n");
}
