#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
void coutput(int s);                      //定义转换函数
int main()
{
	int n;
	printf("Please enter number: ");      //输入一个数字
	scanf("%d", &n);
	coutput(n);                           //调用转换函数
	system("pause");
	return 0;
}
//转换函数
void coutput(int s)
{
	int i, j, b, bit;
	char v[10];
	//下行为判断数字位数
	for (i=10, b=0, bit=(int)s/pow(i, b); bit>9; bit=(int)s/pow(i, b), b++);
	//下行为把每位数字转换成字符串
	for (i=0, j=b-1; i<b; v[i++]=(int)(s/pow(10, j))%10+'0', j--);
	v[i]='\0';
	printf("Charactor style: ");
	puts(v);
}
