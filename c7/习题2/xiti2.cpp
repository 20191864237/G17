#include <stdio.h>
#include <math.h>
#define disc b*b-4*a*c
float x1,x2,x;
void m(float a,float b, float c)
{
	printf("�����������ȵ�ʵ��\n");
	x1=(-b+sqrt(disc)/2*a);
    x2=(-b-sqrt(disc)/2*a);
	printf("%lf%lf",x1,x2);
}
void n(float a,float b,float c)
{
	printf{"���һ����\n");
	x=(-b/2*a);
	printf("%lf",x);
	}
void v(float a,float b,float c)
{
    printf("��ʵ��");
}
int main()
{
	if(disc>0)
		m(float a,float b,float c);
	else if(disc=0)
		n(float a,float b,float c);
	else
		v(float a,float b,float c);
	return 0;
}












