/*************************************************************************
	> File Name: 12.5.c
	> Author: 
	> Mail: 
	> Created Time: 2020年03月04日 星期三 21时16分37秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void sort(int *p,int n);
int main(void)
{
    int a[100];
    srand( (unsigned ) time ( NULL ));
    for(int i=0;i<100;i++)
    {
        a[i]=rand()%1000+1;
    }
    sort(a,100);
    for(int i=0;i<100;i++)
    {
        printf("%d\t",a[i]);
        if((i+1)%10 == 0)
            printf("\n");
    }
}
void sort(int  *p,int n)
{
    int temp;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            if(*(p+i)>*(p+j))
            {
                temp=*(p+i);
                *(p+j)=*(p+i);
                *(p+i)=temp;
            }
        }
    }
}
