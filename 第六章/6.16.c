/*************************************************************************
	> File Name: 6.16.c
	> Author: 
	> Mail: 
	> Created Time: 2020年02月01日 星期六 00时11分21秒
 ************************************************************************/

#include<stdio.h>
int main(void)
{
    int i=100,cnt=0;
    while(1)
    {
        cnt++;
        i=i*0.08+i-10;
        if(i<0)
        {
            printf("%d年后，Chuckie会清空他的账户。\n",cnt);
            return 0;
        }
        
    }
}
