#include <stdio.h>
void main(void)
{
	int max1(int x,int y);
	int max2(int x,int y);
	int a,b;
	printf("����\n");
	scanf("%d%d",&a,&b);
	printf("���Լ��Ϊ%d",max1(a,b));
	printf("��С������Ϊ%d",max2(a,b));
}
int max1(int x,int y)
{
	int z;
	while(y!=0)
	{
		z=x%y;
		x=y;
		y=z;
	}
	return x;
}
int max2(int x,int y)
{
	int z;
	z=x%y/max1(x,y);
	return z;
}