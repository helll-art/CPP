/*************************************************************************
	> File Name: 13.7b.c
	> Author: 
	> Mail: 
	> Created Time: 2020年03月06日 星期五 15时22分20秒
 ************************************************************************/

#include<stdio.h>
int main(int argc,char *argv[] )
{
    FILE *fa,*fs;
    int e1,e2;
    char str1[100],str2[100];
    fa=fopen(argv[1],"r");
    fs=fopen(argv[2],"r");
    while(1)
    {
        e1=fscanf(fa,"%s",str1);
        e2=fscanf(fs,"%s",str2);
        if(e1==1)
        {
            printf("%s",str1);
        }
        if(e2==1)
        {
            printf("%s",str2);
        }
        if(e1==1 && e2==1)
        {
            printf("\n");
        }
        if(e1!=1 && e2 != 1)
        {
            fclose(fa);
            fclose(fs);
            return 0;
        }
    }
}
