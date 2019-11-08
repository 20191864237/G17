#include <stdio.h>
int main()
{
	int i,a,n,m=0,sum=0;
	printf("输入数字");
	scanf("%d",&a);
	printf("输入位数");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		m=10*m+a;
		sum=m+sum;
	}
	printf("原式等于%d\n",sum);
	return 0;
}
