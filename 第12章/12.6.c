/*************************************************************************
	> File Name: 12.6.c
	> Author: 
	> Mail: 
	> Created Time: 2020年03月04日 星期三 21时34分23秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void)
{
    int a[1000];
    int d[10]={0};
    srand ( ( unsigned ) time  ( NULL ));
    for(int i=0;i<1000;i++)
    {
        a[i]=rand()%10+1;
    }
    for(int i=0;i<1000;i++)
    {
        for(int j=1;j<=10;j++)
        {
            if(a[i]==j)
            {
                d[j]++;
            }
        }
    }
    int sum=0;
    printf("数字\t次数\n");
    for(int i=1;i<=10;i++)
    {
        sum=sum+d[i];
        printf("%d\t\t%d\n",i,d[i]);
    }
    printf("总次数：%d\n",sum);
}
