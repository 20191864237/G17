#include <stdio.h>
#include <math.h>
int main()
{
	int m,n,x,y,z;
	printf("����");
	scanf("%d%d",&m,&n);
	x=m;
	y=n;
	while(y!=0)
	{
    z=x%y;//
	x=y;
	y=z;//���ﲻ��
	}
	printf("��Լ��Ϊ%d\n",x);
	printf("������Ϊ%d\n",(m*n)/x);
	return 0;
}