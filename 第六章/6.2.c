/*************************************************************************
	> File Name: 6.2.c
	> Author: 
	> Mail: 
	> Created Time: 2020年01月31日 星期五 21时15分02秒
 ************************************************************************/

#include<stdio.h>
int main(void)
{
    for(int i=0;i<5;i++)
    {
        for (int j=i+1;j>0;j--)
        {
            printf("$");
        }
        printf("\n");
    }
}
