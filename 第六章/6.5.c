/*************************************************************************
	> File Name: 6.5.c
	> Author: 
	> Mail: 
	> Created Time: 2020年01月31日 星期五 21时55分48秒
 ************************************************************************/

#include<stdio.h>
int main(void)
{
    int i,j,k,m,n;
    printf("请输入该表的上下限：");
    scanf("%d%d",&m,&n);
    printf("**********************************\n");
    printf("原数            平方         立方\n");
    for (int a=m;a<n+1;a++)
    {
        printf("%d%17d%13d\n",a,a*a,a*a*a);
    }
    printf("**********************************\n");
}
