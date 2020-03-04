/*************************************************************************
	> File Name: 11.13.c
	> Author: 
	> Mail: 
	> Created Time: 2020年03月03日 星期二 12时10分47秒
 ************************************************************************/

#include<stdio.h>
int main(void)
{
     double a;
    int n;
     double sum=1;
    scanf("%lf%d",&a,&n);
    if (n==0)
    {
        sum=1;
    }
    else{
        for (int i=1;i<=n;i++)
        {
            sum=sum*a;
        }
    }
    printf("%lf\n",sum);
}
