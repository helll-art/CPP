/*************************************************************************
	> File Name: 6.3.c
	> Author: 
	> Mail: 
	> Created Time: 2020年01月31日 星期五 21时20分17秒
 ************************************************************************/

#include<stdio.h>
int main(void)
{
    for (int i=0;i<6;i++)
    {
        for(int j=0;j<i+1;j++)
        {
            printf("%c",'F'-j);
        }
        printf("\n");
    }
}
