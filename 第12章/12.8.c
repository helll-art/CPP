/*************************************************************************
	> File Name: 12.8.c
	> Author: 
	> Mail: 
	> Created Time: 2020年03月04日 星期三 22时02分25秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int *make_array(int elem ,int val);
void show_array(const int ar[],int n);
int main(void)
{
    int *pa;
    int size;
    int value;
    printf("Enter the number of elements:");
    scanf("%d",&size);
    while(size>0)
    {
        printf("Enter the initialization value:");
        scanf("%d",&value);
        pa=make_array(size,value);
        if(pa)
        {
            show_array(pa,size);
                free(pa);
        }
        printf("Enter the number of elements(<1 to quit):");
        scanf("%d",&size);

    }
    printf("Done.\n");
}
int *make_array(int elem,int val)
{
    int *p;
    p=(int *)malloc(sizeof(int )*elem);
    while(elem--)
    {
        *(p+elem)=val;
    }
    return p;
}
void show_array(const int ar[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d\t",ar[i]);
        if(i%8 == 7)
        printf("\n");
    }
}
