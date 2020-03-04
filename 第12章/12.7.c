/*************************************************************************
	> File Name: 12.7.c
	> Author: 
	> Mail: 
	> Created Time: 2020年03月04日 星期三 21时43分19秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void )
{
    int a[1000];
    srand( ( unsigned ) time ( NULL ) ) ;
    int sets,sides,dice;  //sets代表总共的局数  sides 代表拥有的面数 dice 表示每局投掷的次数
    printf("Enter the number of sets:enter q to stop.\n");
    while(scanf("%d",&sets) == 1)
    {
        int sum=0;
        printf("How many sides and how many dice?\n");
        scanf("%d%d",&sides,&dice);
        printf("Here are %d sets of %d %d-sided throws:\n");
        for(int j=0;j<sets;j++)
        {
            sum=0;
            for(int i=0;i<dice;i++)
            {
                a[i]=rand()%sides+1;
                sum=sum+a[i];
            }
            printf("%d\t",sum);
        }
        printf("\nHow many sets? Enter q to stop.");
    }
}
