#include <stdio.h>
#include <stdlib.h>
#include<string.h>//引入字符头文件库
#include<conio.h>//预处理命令，表示程序包含conio.h库文件conio.h库文件定义了通过控制台进行数据输入和数据输出的函数，主要是一些用户通过按键盘产生的对应操作

int flag=0;

struct students
{
    int stu_number;//学号
    char name[10];//姓名
    int score[10];//成绩
    double sum;//总分
    double average;//平均成绩
} stu[100];//100名学生

int Menu1()//选择菜单
{
    int choice;//选择用的变量
    printf("****************************欢迎使用****************************\n");
    printf("***********************学生成绩管理系统*************************\n");
    printf("****************************************************************\n");
    printf("\n");
    printf("**********************请选择您要进行的操作**********************\n");
    printf("\t\t\t1.打开已有数据\n");
    printf("\t\t\t2.输入新的数据\n");
    printf("****************************************************************\n");
    printf("\n");
    scanf("%d",&choice);
    return choice;
}

int Menu2()//主菜单
{
    int choice;//选择用的变量
    printf("****************************************************************\n");
    printf("**********************请选择您要进行的操作**********************\n");
    printf("\t\t\t1.按总分进行排序\n");
    printf("\t\t\t2.按单科成绩进行排序\n");
    printf("\t\t\t3.成绩修改删除\n");
    printf("\t\t\t4.查询\n");
    printf("\t\t\t5.保存\n");
    printf("\t\t\t6.退出系统\n");
    printf("****************************************************************\n");
    printf("****************************************************************\n");
    scanf("%d",&choice);
    printf("\n");
    return choice;
}

int Menu3()//查询菜单
{
    int choice;
    printf("****************************************************************\n");
    printf("**********************请选择您要进行的操作**********************\n");
    printf("\t\t\t1.按学号进行查询\n");
    printf("\t\t\t2.按姓名进行查询\n");
    printf("****************************************************************\n");
    scanf("%d",&choice);
    return choice;
}



void sort1(struct students stu[],int n)//总分排序
{
    int i,j;//循环控制变量
    struct students stu_temp;//排序时交换的临时结构体变量
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(stu[i].sum>stu[j].sum)
            {
                stu_temp = stu[j];
                stu[j]=stu[i];
                stu[i] = stu_temp;
            }
        }
    }
}

void sort2(struct students stu[],int n)//学号排序
{
    int i,j;//循环控制变量
    struct students stu_temp;//排序时交换的临时结构体变量
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(stu[i].score<stu[j].score)
            {
                stu_temp = stu[j];
                stu[j]=stu[i];
                stu[i] = stu_temp;
            }
        }
    }
}

void Process(int student,int subjects,char subname[8][10])//处理函数
{
    int student_AfterMinus = student - flag;
    int i,j,k;//循环控制变量
    float sub_sum[subjects];//各科总成绩
    int choice;//目录选择变量
    int edit_number;//修改和查找的时候输入的学号
    struct students *p = stu;
    int change;//确定是否修改的变量
    char name_temp[20];//通过姓名查询时用来输入姓名
    int qualify[subjects][5];//判断课程优良数目的数组
    while(1)
    {
        choice = Menu2();
        for(i=0; i<subjects; i++)
            for(j=0; j<5; j++)
                qualify[i][j]=0;//每次统计前清零

        if(choice==1)//总分排序
        {
            printf("按总分排序结果为:\n");
            sort1(p,student);
            printf("姓名\t学号\t");
            for(i=0; i<subjects; i++)
            {
                printf("%s\t",subname[i]);
            }
            printf("总分\t平均分");
            printf("\n");
            for(i=0; i<student - flag; i++)
            {
                printf("%s\t%d\t",stu[i].name,stu[i].stu_number);
                for(j=0; j<subjects; j++)
                {
                    printf("%d\t",stu[i].score[j]);
                }
                printf("%5.2f\t%5.2f",stu[i].sum,stu[i].average);
                printf("\n");
            }
        }
       
        else if(choice==2)//各科成绩排序
        {
            printf("按各科成绩排序结果为:\n");
            sort3(p,student);
            printf("各科成绩\t学号\t");
            for(i=0; i<subjects; i++)
            {
                printf("%s\t",score[i]);
            }
            printf("总分\t平均分");
            printf("\n");//输出表头到控制台
            for(i=0; i<student - flag; i++)
            {
                printf("%s\t%d\t",stu[i].name,stu[i].stu_number);
                for(j=0; j<subjects; j++)
                {
                    printf("%d\t",stu[i].score[j]);
                }
                printf("%5.2f\t%5.2f",stu[i].sum,stu[i].average);
                printf("\n");
            }
        }
        else if(choice==3)//输入学号进行修改
        {
            printf("请输入要修改的学生的学号:");
            scanf("%d",&edit_number);
            for(i=0; i<student_AfterMinus; i++)
            {
                if(edit_number==stu[i].stu_number)
                {
                    printf("该名同学的成绩信息如下:\n");
                    printf("姓名\t学号\t");
                    for(j=0; j<subjects; j++)
                    {
                        printf("%s\t",subname[i]);
                    }
                    printf("总分\t平均分");
                    printf("\n");
                    printf("%s\t%d\t",stu[i].name,stu[i].stu_number);
                    for(k=0; k<subjects; k++)
                    {
                        printf("%d\t",stu[i].score[k]);
                    }
                    printf("%5.2f\t%5.2f",stu[i].sum,stu[i].average);
                    printf("\n");
                    printf("您确定要修改该学生的成绩？(修改请输入1，删除请输入2，否请输入其他数字):");
                    scanf("%d",&change);
                    if(change==1)
                    {
                        for(i=0; i<student_AfterMinus; i++)
                        {
                            if(edit_number==stu[i].stu_number)
                            {
                                stu[i].sum=0;
                                for(j=0; j<subjects; j++)
                                {
                                    printf("请输入第%s同学的%s成绩：",stu[i].name,subname[j]);
                                    scanf("%d",&stu[i].score[j]);
                                    stu[i].sum += stu[i].score[j];
                                }
                                stu[i].average = stu[i].sum/subjects;
                            }
                        }
                    }
                    else if(change==2)
                    {
                        flag++;
                        for(i=0; i<student_AfterMinus; i++)
                        {
                            if(edit_number==stu[i].stu_number)
                            {
                                for(j=0; j<20; j++)
                                    stu[i].name[j] = 'z';
                                stu[i].stu_number = 999999;
                                stu[i].sum = -1;
                                sort1(p,student);
                            }
                        }
                    }
                    else
                        continue;
                }
                else
                {
                    printf("学生不存在！\n");
                    break;
                }

            }

        }
        else if(choice==4)//查询
        {
            choice=Menu3();
            if(choice==1)
            {
                printf("请输入要查找的学生学号:");
                scanf("%d",&edit_number);
                for(i=0; i<student_AfterMinus; i++)
                {
                    if(edit_number==stu[i].stu_number)
                    {
                        printf("该名同学的成绩信息如下:\n");
                        printf("姓名\t学号\t");
                        for(j=0; j<subjects; j++)
                        {
                            printf("%s\t",subname[i]);
                        }
                        printf("总分\t平均分");
                        printf("\n");
                        printf("%s\t%d\t",stu[i].name,stu[i].stu_number);
                        for(k=0; k<subjects; k++)
                        {
                            printf("%d\t",stu[i].score[k]);
                        }
                        printf("%5.2f\t%5.2f",stu[i].sum,stu[i].average);
                        printf("\n");
                    }
                }
            }
            else if(choice==2)
            {
                printf("请输入要查找的学生姓名:");
                scanf("%s",name_temp);
                for(i=0; i<student_AfterMinus; i++)
                {
                    if(strcmp(name_temp,stu[i].name)==0)
                    {
                        printf("该名同学的成绩信息如下:\n");
                        printf("姓名\t学号\t");
                        for(j=0; j<subjects; j++)
                        {
                            printf("%s\t",subname[i]);
                        }
                        printf("总分\t平均分");
                        printf("\n");
                        printf("%s\t%d\t",stu[i].name,stu[i].stu_number);
                        for(k=0; k<subjects; k++)
                        {
                            printf("%d\t",stu[i].score[k]);
                        }
                        printf("%5.2f\t%5.2f",stu[i].sum,stu[i].average);
                        printf("\n");
                    }
                }
            }
        }
        
        else if(choice==5)//保存到文件
        {
            FILE * fp;
            char filename[20];
            printf("请输入要输出的文件名:");
            scanf("%s",filename);
            fp = fopen(filename,"wb+");
            fwrite(&flag,sizeof(flag),1,fp);
            fwrite(&student,sizeof(student),1,fp);
            fwrite(&subjects,sizeof(subjects),1,fp);
            for(i=0; i<subjects; i++)
            {
                fwrite(&subname[i],sizeof(subname[i]),1,fp);
            }
            for(i=0; i<student; i++)
            {
                fwrite(&stu[i],sizeof(struct students),1,fp);
            }
            fclose(fp);
        }
        else if(choice==6)
        {
            break;
        }
        else
            printf("您输入有误，请重新输入！\n");
    }
}
void Input ()//数据输入
{
    int i,j;//循环控制变量
    int student;//保存各班学生总人数
    int student_AfterMinus;
    int subjects;//保存科目总数
    char subname[8][10];//保存科目名称

    printf("请输入班级学生总人数：");
    scanf("%d",&student);
    student_AfterMinus = student - flag;
    printf("请输入科目总数：");
    scanf("%d",&subjects);

    for(i=0; i<subjects; i++)
    {
        printf("请输入第%d门科目名称：",i+1);
        scanf("%s",subname[i]);
    }

    for(i=0; i<student_AfterMinus; i++)
    {
        printf("请输入第%d名学生的姓名：",i+1);
        scanf("%s",stu[i].name);
        printf("请输入第%d名同学的学号：",i+1);
        scanf("%d",&stu[i].stu_number);
        stu[i].sum=0;
        for(j=0; j<subjects; j++)
        {
            printf("请输入%s同学的%s成绩：",stu[i].name,subname[j]);
            scanf("%d",&stu[i].score[j]);
            stu[i].sum += stu[i].score[j];
        }
        stu[i].average = stu[i].sum/subjects;
    }

    Process(student,subjects,subname);


}

void Choice()//选择读取还是输入
{
    int choice;//用来选择输入还是读取的变量
    int student;
    int subjects;
    char subname[8][10];
    int i;
    FILE * fp;
    while(1)
    {
        choice = Menu1();
        if(choice==2)//输入
        {
            Input();
            break;
        }
        else if(choice==1)//读取
        {
            char filename[20];
            while(1)
            {
                printf("请输入要读入的文件名:");
                scanf("%s",filename);
                if((fp = fopen(filename,"rb"))==NULL)
                {
                    printf("没有此文件，请重新输入!\n");
                    continue;
                }
                else break;
            }
            fread(&flag,sizeof(flag),1,fp);
            fread(&student,sizeof(student),1,fp);
            fread(&subjects,sizeof(subjects),1,fp);
            for(i=0; i<subjects; i++)
            {
                fread(&subname[i],sizeof(subname[i]),1,fp);
            }
            for(i=0; i<student; i++)
            {
                fread(&stu[i],sizeof(struct students),1,fp);
            }
            fclose(fp);
            Process(student,subjects,subname);
            break;
        }
        else
        {
            printf("您输入有误，请重新输入！\n");
        }
    }
}

int main()
{
        Choice();
    return 0;
}
