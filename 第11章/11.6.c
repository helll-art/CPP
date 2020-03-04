/*************************************************************************
	> File Name: 11.6.c
	> Author: 
	> Mail: 
	> Created Time: 2020年02月21日 星期五 23时25分29秒
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
char * Strncpy(char *s1,char *s2,int n)
{
    int t1=strlen(s1);
    int t2=strlen(s2);
    int i;
    if(t2>=n)
        return s1;
    else
    {
        for( i=0;i<n;i++)
        {
            *(s1+t1+i)=*(s2+i);
        }
        *(s1+t1+i)='\0';
        return s1;
    }
    
}
int main(void)
{
    char s1[1000],s2[1000];
    printf("输入字符串1和字符串2，回车标志字符串的结束：");
    input(s1);
    input(s2);
    int n;
    printf("输入要复制的字符数：");
    scanf("%d",&n);
    Strncpy(s1,s2,n);
    fputs(s1,stdout);
}
