#include <stdio.h>
#include <math.h>
void aver_stu(int t[][5]);               //定义学生平均分函数
void aver_course(int t[][5]);            //定义课程平均分函数
void high(int t[][5]);                   //定义最高分函数
void vari(int t[][5]);                   //定义方差函数
int main()
{
    int stu[10][5];
    int i, j;
    for (i=0; i<10; i++)
        for (j=0; j<5; j++)
            scanf("%d", &stu[i][j]);     //输入10个学生各5门课的成绩
    aver_stu(stu);                       //调用学生平均分函数
    aver_course(stu);                    //调用课程平均分函数
    high(stu);                           //调用最高分函数
    vari(stu);                           //调用方差函数
    return 0;
}
//学生平均分函数
void aver_stu(int t[][5])
{
    int i, j;
    float k, ave;
    for (i=0; i<10; i++){
        for (j=0, k=0.0; j<5; j++)
            k+=t[i][j];
        ave=k/5;
        printf("No.%d student average is %f\n", i+1, ave);
    }
}
//课程平均分函数
void aver_course(int t[][5])
{
    int i, j;
    float k, ave;
    for (j=0; j<5; j++){
        for (i=0, k=0.0; i<10; i++)
            k+=t[i][j];
        ave=k/10;
        printf("No.%d course average is %f\n", j+1, ave);
    }
}
//最高分函数
void high(int t[][5])
{
    int i, j, h, stu, cour;
    for (i=0, h=0, stu=0, cour=0; i<10; i++)
	{
		int j=0;
        for (j=0, j<5; j++)
            if (t[i][j]>h){
                h=t[i][j];
                stu=i+1;
                cour=j+1;
            }
    }
    printf("The highest score is %d, from No.%d student & No.%d course\n", h, stu, cour);
}
//方差函数
void vari(int t[][5])
{
    int i, j, k, m;
    float temp[10], var, x1, x2;
    for (i=0, m=0; i<10; i++, m++){
        for (j=0, k=0; j<5; j++)
            k+=t[i][j];
        temp[m]=k/5;
    }
    for (i=m=x1=x2=0; i<10; i++){
        x1+=pow(temp[i], 2);
        x2+=temp[i];
    }
    var=x1/10-pow(x2/10, 2);
    printf("The variance is %f\n", var);
}
