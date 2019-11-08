#include <stdio.h>
#include <math.h>
#define M 1000
int main()
{
	int a,b;
	printf("输入",M);//测试用
	scanf("%d",&a);
	if(a>M)
	{
	printf("再输入",M);
	scanf("%d",&a);
	}
	b=sqrt(a);
	printf("%d平方根的整数部分%d\n",a,b);
	return 0;
}

