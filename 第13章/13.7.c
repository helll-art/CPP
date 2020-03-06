/*************************************************************************
	> File Name: 13.7.c
	> Author: 
	> Mail: 
	> Created Time: 2020年03月06日 星期五 14时47分50秒
 ************************************************************************/

#include<stdio.h>
int main(int argc,char *argv[])
{
    int e1,e2;
    FILE *fa, *fs;
    char str1[100],str2[100];
    fa=fopen(argv[1],"r");
    fs=fopen(argv[2],"r");
    if(fa ==NULL || fs==NULL )
    {
        printf("读取文件失败。\n");
        return 0;
    }
    while(1)
    {
        e1=fscanf(fa,"%s",str1);
        e2=fscanf(fs,"%s",str2);
        if(e1==1)
        {
            puts(str1);
        }
        if(e2==1)
        {
            puts(str2);
        }
        if(e1!=1 && e2!= 1)
        {
            fclose(fa);
            fclose(fs);
            return 0;
        }
    }
}
