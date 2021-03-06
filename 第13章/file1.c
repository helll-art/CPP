/*************************************************************************
	> File Name: file1.c
	> Author: 
	> Mail: 
	> Created Time: 2020年03月06日 星期五 12时54分42秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define BUFSIZE 1024
#define SLEN 81
void append(FILE *source ,FILE *dest);
int main(void)
{
    FILE *fa,*fs;
    int files = 0;
    char file_app[SLEN];
    char file_src[SLEN];
    fputs("Enter name of destination file:",stderr);
    fgets(file_app,SLEN,stdin);
    if((fa = fopen(file_app,"a")) == NULL)
    {
        fprintf(stderr,"cant't open %s\n",file_app);
        exit(2);
    }
    if(setvbuf(fa,NULL,_IOFBF,BUFSIZE)!=0)
    {
        fputs("can't create output buffer\n",stderr);
        exit(3);
    }
    puts("Enter name of first source file:");
    while(fgets(file_src,SLEN,stdin) && file_src[0]!='\0')
    {
        if(strcmp(file_src,file_app)==0)
            fputs("cant append file to itself\n",stderr);
        else if((fs=fopen(file_src,"r")) == NULL)
            fprintf(stderr,"cant open %s\n",file_src);
        else 
        {
            if(setvbuf(fs,NULL,_IOFBF,BUFSIZE)!=0)
            {
                fputs("cant create input buffer\n",stderr);
                continue;
            }
        
        append(fs,fa);
        if(ferror(fs)!=0)
            fprintf(stderr,"Error in reading file %s\n",file_src);
        if(ferror(fa)!=0)
            fprintf(stderr,"Error in weiting file %s.\n",file_app);
        fclose(fs);
        files++;
        printf("File %s appended.\n",file_src);
        fputs("Next file (empty line to quit):",stdout);

        }
    }
        printf("Done. %d files appended.\n",files);
        fclose(fa);
        return 0;
}
void append(FILE *source,FILE *dest)
{
    size_t bytes;
    static char temp[BUFSIZE];
    while((bytes = fread(temp,sizeof(char),BUFSIZE,source))>0)
        fwrite(temp,sizeof(char),bytes,dest);
}
