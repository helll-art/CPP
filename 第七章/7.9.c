/*************************************************************************
	> File Name: 7.9.c
	> Author: 
	> Mail: 
	> Created Time: 2020年02月03日 星期一 00时09分41秒
 ************************************************************************/

#include<stdio.h>
int main(void)
{
    int a,i,j,cnt=0;
    printf("输入一个数，列出比该数小的所有素数：");
    scanf("%d",&a);
    
    for ( i=2;i<=a;i++)
    {
        int f=1;
        for (j=2;j<i;j++)
        {
            if (i%j==0)
                f=0;
        }
        if (f == 1)
        {
            cnt++;
            printf("%d\t",i);
        }

    }
    printf("\n");
}
