/*************************************************************************
	> File Name: 11.11.c
	> Author: 
	> Mail: 
	> Created Time: 2020年03月03日 星期二 10时31分30秒
 ************************************************************************/

#include<stdio.h>
#include<ctype.h>
int main(void)
{
    int word=0,upper=0,lower=0,punct=0,digit=0,begin=0;
    char ch;
    while((ch=getchar())!=EOF)
    {
        if(isupper(ch)) upper++;    //大写字母
        if(islower(ch)) lower++;    //小写字母
        if(ispunct(ch)) punct++;    //标点
        if(isalnum(ch) && isalpha(ch)==0) digit++;  //数字
        if(isalpha(ch))             //判断单词数
        {                           //输入是逐个输入用该方法
            if(begin==0)            //输入时字符串用present,former
            {
                word++;
                begin=1;
            }

        }
        else begin = 0;  
    }
    printf("\nword = %d \n upper = %d \nlower = %d \n",word,upper,lower);
    printf("punct = %d \n digit = %d \n",punct,digit);
}

