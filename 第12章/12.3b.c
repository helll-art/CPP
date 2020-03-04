/*************************************************************************
	> File Name: 12.3b.c
	> Author: 
	> Mail: 
	> Created Time: 2020年03月04日 星期三 21时05分41秒
 ************************************************************************/

#include<stdio.h>
#include "12.3a.h"
void get_info( int *MODE,double  *DIS,double *FUE)
{
    if(*MODE == METRIC)
    {
        printf("Enter distance traveled in kilometers:");
        scanf("%lf",DIS);
        printf("Enter fuel consumed in liters:");
        scanf("%lf",FUE);
    }
    if(*MODE == US)
    {
        printf("Enter distance traveled in miles:");
        scanf("%lf",DIS);
        printf("ENter fuel consumed in gallons:");
        scanf("%lf",FUE);
    }
}
void show_info(int *MODE,double *DIS,double *FUE)
{
    if(*MODE == METRIC)
        printf("Fuel consumption is %g liters per 100km.\n",*FUE/(*DIS/100));
    else 
        printf("Fuel consumption is %g miles per gallon.\n",*DIS / *FUE);

}
