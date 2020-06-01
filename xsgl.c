/**********************************mZ**************************************
	> File Name: xsgl.c
	> Author: 
	> Mail: 
	> Created Time: 2020年02月25日 星期二 10时46分42秒
 ************************************************************************/
/*
*     注意这个循环的写法  如果修改函数和删除函数写成
*     for( ; strcmp(p->ss.name,name) ;  )
*     {
*       p=p->Next;
*     }
*     如果修改的是最后一个数据  则会超出范围
* */
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>
struct Student
{
    char name[50];
    int  age;
    char sex[20];
    int math;
    int english;
    int chinese;

};
typedef struct Node 
{
    struct Student ss;
    struct Node *Next;
}Node;
void menu();
void help();
Node *create_list(void);      //增加学生信息
void add_list(Node *pHead);   //增加学生信息
void traverse_list(Node *pHead); //查询学生信息
void insert_list(Node *pHead);  //插入学生信息
struct  Student del_list(Node *pHead);   //删除学生信息
void ChangeMessage(Node *pHead);
int main(void)
{
        Node *pHead;
    pHead=create_list();
    add_list(pHead);
    traverse_list(pHead);
    insert_list(pHead);
    traverse_list(pHead);
    struct Student st=del_list(pHead);
    printf("被删除的学生信息是：");
    printf("%s\t\t%d\t\t%s\t\t%d\t\t%d\t\t%d\t\n",st.name,st.age,st.sex,st.math,st.chinese,st.english);
    ChangeMessage(pHead);
    traverse_list(pHead);
   /*        while(1)
    {
                menu();     
                system("clear");
            
    }
        pause();*/

}
/* void menu(void)
{
    int num;
    printf(" *****************************************************\n");
    printf(" *                                                   *\n");
    printf(" *                 学生信息管理系统                  *\n");
    printf(" *                                                   *\n");
    printf(" *****************************************************\n\n");
    printf(" ********************系统功能菜单*********************\n\n");
    printf(" ----------------------------------------------------\n");
    printf(" |    *******************************************   | \n");
    printf(" |    *  0.系统帮助说明 * *  1.添加学生信息     *   | \n");
    printf(" |    *******************************************   | \n");
    printf(" |    *  2.查询学生信息 * *  3.修改学生信息     *   | \n");
    printf(" |    *******************************************   | \n");
    printf(" |    *  4.插入学生信息 * *  5.按姓名删除信息   *   |\n");
    printf(" |    *******************************************   | \n");
    printf(" |    *  6.显示当前信息 * *  7.对总成绩进行排序 *   |\n");
    printf(" |    *******************************************   | \n");
    printf(" |    *  8.退出系统     *                           |\n");
    printf(" |    *******************                           |\n");
    printf(" ----------------------------------------------------\n");
    printf("请选择菜单编号：");
    scanf("%d",&num);
    switch(num)
    {
        case 0:
          printf("****************系统帮助说明*****************\n");    
          help();
          break;
        case 1:
          printf("****************添加学生信息*****************\n");    
        seek();break;
        case 2:
          printf("****************查询学生信息*****************\n");    
        modify();break;
        case 3:
          printf("****************修改学生信息*****************\n");    
        insert();break;
        case 4:
          printf("****************插入学生信息*****************\n");    
        del();break;
        case 5:
          printf("*****************按姓名删除信息****************\n");    
        display();break;
        case 6:
          printf("*****************显示当前信息*****************\n");    
        baocun();break;
        case 7:
          printf("****************对总成绩进行排序*****************\n");   
        case 8:
            k=0;
            break;
        default:printf("请在0~8之间进行选择\n"); 
    }
}*/
void help(void)
{
    printf("\n0.欢迎使用系统帮助！\n");
    printf("\n1.初次进入系统后，请先选择增加学生信息;\n");
    printf("\n2.按照菜单提示键入数字代号;\n");
    printf("\n3.增加学生信息后，切记保存;\n");
    printf("\n4.谢谢您的使用！\n");
}
Node *create_list()
{
    Node *pHead;
    pHead=(Node *)malloc (sizeof(Node ));
    pHead->Next=NULL;
}
void add_list(Node *pHead)
{
    Node *pTail,*pNew;
    pTail=pHead;
    pTail->Next=NULL;
    int num;
    struct Student st;
    printf("请输入学生信息的个数：");
    scanf("%d",&num);
    for (int i=0;i<num;i++)
    {
        pNew=(Node *)malloc(sizeof(Node ));
        printf("输入第%d位学生信息\n",i+1);
        printf("姓名：");
        scanf("%s",st.name);
        printf("年龄：");
        scanf("%d",&st.age);
        printf("性别：");
        scanf("%s",st.sex);
        printf("数学成绩：");
        scanf("%d",&st.math);
        printf("语文成绩：");
        scanf("%d",&st.chinese);
        printf("英语成绩：");
        scanf("%d",&st.english);
        strcpy(pNew->ss.name,st.name);
        pNew->ss.age=st.age;
        strcpy(pNew->ss.sex,st.sex);
        pNew->ss.math=st.math;
        pNew->ss.chinese=st.chinese;
        pNew->ss.english=st.english;
        pTail->Next=pNew;
        pNew->Next=NULL;
        pTail=pNew;
    }
}
void traverse_list(Node * pHead)
{
    Node *p;
    printf("序号\t\t姓名\t\t年龄\t\t性别\t\t数学成绩\t\t语文成绩\t\t英语成绩\n");
    p=pHead->Next;
    int i=0;
    while(p)
    {
        i++;
        printf("%d\t\t",i);
        printf("%s\t\t%d\t\t%s\t\t%d\t\t\t%d\t\t\t%d",p->ss.name,p->ss.age,p->ss.sex,p->ss.math,p->ss.chinese,p->ss.english);
        p=p->Next;
        printf("\n");
    }
}
void insert_list(Node *pHead)
{
    int num;
    struct Student st;
    Node *q ,*p;
    q=(Node *)malloc(sizeof(Node ));
    printf("请输入要插入的位置：");
    scanf("%d",&num);
    printf("请输入该学生的信息:\n");
    printf("姓名：");
    scanf("%s",st.name);
    printf("年龄：");
    scanf("%d",&st.age);
    printf("性别：");
    scanf("%s",st.sex);
    printf("数学成绩：");
    scanf("%d",&st.math);
    printf("语文成绩：");
    scanf("%d",&st.chinese);
    printf("英语成绩：");
    scanf("%d",&st.english);
    strcpy(q->ss.name,st.name);        //字符串的复制用strcpy函数 
    q->ss.age=st.age;
    strcpy(q->ss.sex,st.sex);
    q->ss.math=st.math;
    q->ss.chinese=st.chinese;
    q->ss.english=st.english;
    p=pHead;
    for(int i=0;i<num-1;i++)
    {
        p=p->Next;
    }
    q->Next=p->Next;
    p->Next=q;
    
}
struct  Student del_list(Node *pHead)
{
    Node *p,*r;
    struct Student st;
    p=pHead;
    int pos;
    printf("请输入要删除学生的序号：");
    scanf("%d",&pos);
    for(int i=0;i<pos-1 ;i++ )
    {
        p=p->Next;                       
    }
    r=p->Next;
    p->Next=r->Next;
    st=r->ss;
    free(r);
    return st;

    
}
void ChangeMessage(Node *pHead)
{
    Node *p;
    struct Student st;
    p=pHead;
    int pos;
    printf("请输入要修改的学生的序号");
    scanf("%d",&pos);
    for(int i=0;i<pos-1;i++ )                                       
    {
        p=p->Next;
    }
    printf("年龄：");
    scanf("%d",&st.age);
    printf("性别：");
    scanf("%s",st.sex);
    printf("数学成绩：");
    scanf("%d",&st.math);
    printf("语文成绩：");
    scanf("%d",&st.chinese);
    printf("英语成绩：");
    scanf("%d",&st.english);
    p->ss.age=st.age;
    strcpy(p->ss.sex,st.sex);
    p->ss.math=st.math;
    p->ss.chinese=st.chinese;
    p->ss.english=st.english;
    printf("修改成功！\n");
    printf("%s%d%s%d%d%d\n",p->ss.name,p->ss.age,p->ss.sex,p->ss.math,p->ss.chinese,p->ss.english);
}

