#include <stdio.h>
#include <math.h>
int main()
{
	int x,y,h;
	printf("����");
	scanf("%d,%d",&x,&y);
	if(pow(x-2,2)+pow(y-2,2)<=1||pow(x-2,2)+pow(y+2,2)<=1||pow(x+2,2)+pow(y-2,2)<=1||pow(x+2,2)+pow(y+2,2)<=1)
		h=10;//ͨ��Բ�ķ��̵ļ����������жϸõ��Ƿ����ĸ�Բ�ķ�Χ��
	else
		h=0;
	printf("�߶�Ϊ%d\n",h);
	return 0;
}//�������⣺���������꣨2,2����Բ��ʱ���߶�ȴΪ�㣬�޷������



