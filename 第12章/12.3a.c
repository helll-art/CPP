/************************mZ************************************************
	> File Name: 12.3a.c
	> Author: 
	> Mail: 
	> Created Time: 2020年03月04日 星期三 20时41分05秒
 ************************************************************************/

#include<stdio.h>
#include "12.3a.h"
int main(void)
{
    int mode ;
    double distance ,fuel;
    printf("Enter 0 for metric mode.1 for US mode: ");
    scanf("%d",&mode);
    while(mode >=0)
    {
        get_info(&mode,&distance ,&fuel);
        show_info(&mode,&distance,&fuel);
        printf("Enter 0 for metric mode.1 for US mode:");
        printf("(-1 to quit):");
        scanf("%d",&mode);
    }
    printf("Done!\n");
}
