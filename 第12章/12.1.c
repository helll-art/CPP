/*************************************************************************
	> File Name: 12.1.c
	> Author: 
	> Mail: 
	> Created Time: 2020年03月04日 星期三 15时23分42秒
 ************************************************************************/

#include<stdio.h>
void critic(int *p);
int main(void)
{
    int units;
    printf("How many pounds to a firkin of butter?\n");
    scanf("%d",&units);
    while(units!=56)
        critic(&units);
    printf("You must have looed it up!\n");
    return 0;
}
void critic(int *p)
{
    printf("No luck,chummy.Try again.\n");
    scanf("%d",p);
}
