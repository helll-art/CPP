/*************************************************************************
	> File Name: 13.9.c
	> Author: 
	> Mail: 
	> Created Time: 2020年04月06日 星期一 10时27分08秒
 ************************************************************************/



#include<stdio.h>
#include<stdlib.h>
#define MAX 40
int main(void)
{
    FILE *fp;
    char words[MAX];
    int count = 0;
    if((fp = fopen("words","a+"))==NULL)
    {
        fprintf(stdout,"can't open \"words\" file.\n");
        exit(1);
    }
    rewind(fp);
    while(fgets(words,MAX-1,fp)!=NULL)
        count++;
    puts("Enter words to add to the file; press the Enter");
    puts("key at the beginning of a line to terminate.");
    while(gets(words)!=NULL && words[0]!='\0')
        fprintf(fp,"%d:%s\n",count++,words);
    puts("File contents:");
    rewind(fp);
    while(fscanf(fp,"%s",words)==1)
        puts(words);
    if(fclose(fp)!=0)
        fprintf(stderr,"error closing file\n");
    return 0;
}
