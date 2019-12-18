#include <stdio.h>
#include <stdlib.h>
#include<string.h>//�����ַ�ͷ�ļ���
#include<conio.h>//Ԥ���������ʾ�������conio.h���ļ�conio.h���ļ�������ͨ������̨���������������������ĺ�������Ҫ��һЩ�û�ͨ�������̲����Ķ�Ӧ����

int flag=0;

struct students
{
    int stu_number;//ѧ��
    char name[10];//����
    int score[10];//�ɼ�
    double sum;//�ܷ�
    double average;//ƽ���ɼ�
} stu[100];//100��ѧ��

int Menu1()//ѡ��˵�
{
    int choice;//ѡ���õı���
    printf("****************************��ӭʹ��****************************\n");
    printf("***********************ѧ���ɼ�����ϵͳ*************************\n");
    printf("****************************************************************\n");
    printf("\n");
    printf("**********************��ѡ����Ҫ���еĲ���**********************\n");
    printf("\t\t\t1.����������\n");
    printf("\t\t\t2.�����µ�����\n");
    printf("****************************************************************\n");
    printf("\n");
    scanf("%d",&choice);
    return choice;
}

int Menu2()//���˵�
{
    int choice;//ѡ���õı���
    printf("****************************************************************\n");
    printf("**********************��ѡ����Ҫ���еĲ���**********************\n");
    printf("\t\t\t1.���ֽܷ�������\n");
    printf("\t\t\t2.�����Ƴɼ���������\n");
    printf("\t\t\t3.�ɼ��޸�ɾ��\n");
    printf("\t\t\t4.��ѯ\n");
    printf("\t\t\t5.����\n");
    printf("\t\t\t6.�˳�ϵͳ\n");
    printf("****************************************************************\n");
    printf("****************************************************************\n");
    scanf("%d",&choice);
    printf("\n");
    return choice;
}

int Menu3()//��ѯ�˵�
{
    int choice;
    printf("****************************************************************\n");
    printf("**********************��ѡ����Ҫ���еĲ���**********************\n");
    printf("\t\t\t1.��ѧ�Ž��в�ѯ\n");
    printf("\t\t\t2.���������в�ѯ\n");
    printf("****************************************************************\n");
    scanf("%d",&choice);
    return choice;
}



void sort1(struct students stu[],int n)//�ܷ�����
{
    int i,j;//ѭ�����Ʊ���
    struct students stu_temp;//����ʱ��������ʱ�ṹ�����
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

void sort2(struct students stu[],int n)//ѧ������
{
    int i,j;//ѭ�����Ʊ���
    struct students stu_temp;//����ʱ��������ʱ�ṹ�����
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

void Process(int student,int subjects,char subname[8][10])//������
{
    int student_AfterMinus = student - flag;
    int i,j,k;//ѭ�����Ʊ���
    float sub_sum[subjects];//�����ܳɼ�
    int choice;//Ŀ¼ѡ�����
    int edit_number;//�޸ĺͲ��ҵ�ʱ�������ѧ��
    struct students *p = stu;
    int change;//ȷ���Ƿ��޸ĵı���
    char name_temp[20];//ͨ��������ѯʱ������������
    int qualify[subjects][5];//�жϿγ�������Ŀ������
    while(1)
    {
        choice = Menu2();
        for(i=0; i<subjects; i++)
            for(j=0; j<5; j++)
                qualify[i][j]=0;//ÿ��ͳ��ǰ����

        if(choice==1)//�ܷ�����
        {
            printf("���ܷ�������Ϊ:\n");
            sort1(p,student);
            printf("����\tѧ��\t");
            for(i=0; i<subjects; i++)
            {
                printf("%s\t",subname[i]);
            }
            printf("�ܷ�\tƽ����");
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
       
        else if(choice==2)//���Ƴɼ�����
        {
            printf("�����Ƴɼ�������Ϊ:\n");
            sort3(p,student);
            printf("���Ƴɼ�\tѧ��\t");
            for(i=0; i<subjects; i++)
            {
                printf("%s\t",score[i]);
            }
            printf("�ܷ�\tƽ����");
            printf("\n");//�����ͷ������̨
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
        else if(choice==3)//����ѧ�Ž����޸�
        {
            printf("������Ҫ�޸ĵ�ѧ����ѧ��:");
            scanf("%d",&edit_number);
            for(i=0; i<student_AfterMinus; i++)
            {
                if(edit_number==stu[i].stu_number)
                {
                    printf("����ͬѧ�ĳɼ���Ϣ����:\n");
                    printf("����\tѧ��\t");
                    for(j=0; j<subjects; j++)
                    {
                        printf("%s\t",subname[i]);
                    }
                    printf("�ܷ�\tƽ����");
                    printf("\n");
                    printf("%s\t%d\t",stu[i].name,stu[i].stu_number);
                    for(k=0; k<subjects; k++)
                    {
                        printf("%d\t",stu[i].score[k]);
                    }
                    printf("%5.2f\t%5.2f",stu[i].sum,stu[i].average);
                    printf("\n");
                    printf("��ȷ��Ҫ�޸ĸ�ѧ���ĳɼ���(�޸�������1��ɾ��������2������������������):");
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
                                    printf("�������%sͬѧ��%s�ɼ���",stu[i].name,subname[j]);
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
                    printf("ѧ�������ڣ�\n");
                    break;
                }

            }

        }
        else if(choice==4)//��ѯ
        {
            choice=Menu3();
            if(choice==1)
            {
                printf("������Ҫ���ҵ�ѧ��ѧ��:");
                scanf("%d",&edit_number);
                for(i=0; i<student_AfterMinus; i++)
                {
                    if(edit_number==stu[i].stu_number)
                    {
                        printf("����ͬѧ�ĳɼ���Ϣ����:\n");
                        printf("����\tѧ��\t");
                        for(j=0; j<subjects; j++)
                        {
                            printf("%s\t",subname[i]);
                        }
                        printf("�ܷ�\tƽ����");
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
                printf("������Ҫ���ҵ�ѧ������:");
                scanf("%s",name_temp);
                for(i=0; i<student_AfterMinus; i++)
                {
                    if(strcmp(name_temp,stu[i].name)==0)
                    {
                        printf("����ͬѧ�ĳɼ���Ϣ����:\n");
                        printf("����\tѧ��\t");
                        for(j=0; j<subjects; j++)
                        {
                            printf("%s\t",subname[i]);
                        }
                        printf("�ܷ�\tƽ����");
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
        
        else if(choice==5)//���浽�ļ�
        {
            FILE * fp;
            char filename[20];
            printf("������Ҫ������ļ���:");
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
            printf("�������������������룡\n");
    }
}
void Input ()//��������
{
    int i,j;//ѭ�����Ʊ���
    int student;//�������ѧ��������
    int student_AfterMinus;
    int subjects;//�����Ŀ����
    char subname[8][10];//�����Ŀ����

    printf("������༶ѧ����������");
    scanf("%d",&student);
    student_AfterMinus = student - flag;
    printf("�������Ŀ������");
    scanf("%d",&subjects);

    for(i=0; i<subjects; i++)
    {
        printf("�������%d�ſ�Ŀ���ƣ�",i+1);
        scanf("%s",subname[i]);
    }

    for(i=0; i<student_AfterMinus; i++)
    {
        printf("�������%d��ѧ����������",i+1);
        scanf("%s",stu[i].name);
        printf("�������%d��ͬѧ��ѧ�ţ�",i+1);
        scanf("%d",&stu[i].stu_number);
        stu[i].sum=0;
        for(j=0; j<subjects; j++)
        {
            printf("������%sͬѧ��%s�ɼ���",stu[i].name,subname[j]);
            scanf("%d",&stu[i].score[j]);
            stu[i].sum += stu[i].score[j];
        }
        stu[i].average = stu[i].sum/subjects;
    }

    Process(student,subjects,subname);


}

void Choice()//ѡ���ȡ��������
{
    int choice;//����ѡ�����뻹�Ƕ�ȡ�ı���
    int student;
    int subjects;
    char subname[8][10];
    int i;
    FILE * fp;
    while(1)
    {
        choice = Menu1();
        if(choice==2)//����
        {
            Input();
            break;
        }
        else if(choice==1)//��ȡ
        {
            char filename[20];
            while(1)
            {
                printf("������Ҫ������ļ���:");
                scanf("%s",filename);
                if((fp = fopen(filename,"rb"))==NULL)
                {
                    printf("û�д��ļ�������������!\n");
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
            printf("�������������������룡\n");
        }
    }
}

int main()
{
        Choice();
    return 0;
}
