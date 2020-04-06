/*************************************************************************
	> File Name: 13.12.c
	> Author: 
	> Mail: 
	> Created Time: 2020年04月06日 星期一 10时17分32秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    FILE *fp;
    char name[30],photo[20][31];
    char table[]=" .':~*=&%@";
    int num[20][30],row,column,i=0;
    printf("input the name of source file:");
    gets(name);
    if((fp = fopen(name,"r"))==NULL)
    {
        printf("can't open %s",name);
        exit(1);
    }
    for(row = 0;row<20;row++)
        for(column = 0;column<30;column++)
            fscanf(fp,"%d",&num[row][column]);
        for(row = 0;row <20;row++)
        {
            for(column = 0;column<30;column ++)
                photo[row][column] = table[num[row][column]];
            photo[row][column] = '\0';
        }
        for(row = 0; row<20;row++)
        {
            puts(photo[row]);
        }
        printf("inpu the name of destination file:");
        gets(name);
        if((fp = fopen(name,"w")) == NULL)
        {
            printf("can't open %s",name);
            exit(1);
        }
        for(row = 0;row<20;row++)
            fprintf(fp,"%s\n",photo[row]);
        return 0;
    
}
