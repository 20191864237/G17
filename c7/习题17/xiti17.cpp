#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
void coutput(int s);                      //����ת������
int main()
{
	int n;
	printf("Please enter number: ");      //����һ������
	scanf("%d", &n);
	coutput(n);                           //����ת������
	system("pause");
	return 0;
}
//ת������
void coutput(int s)
{
	int i, j, b, bit;
	char v[10];
	//����Ϊ�ж�����λ��
	for (i=10, b=0, bit=(int)s/pow(i, b); bit>9; bit=(int)s/pow(i, b), b++);
	//����Ϊ��ÿλ����ת�����ַ���
	for (i=0, j=b-1; i<b; v[i++]=(int)(s/pow(10, j))%10+'0', j--);
	v[i]='\0';
	printf("Charactor style: ");
	puts(v);
}
