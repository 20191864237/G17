#include <stdio.h>
int main()
{
	int i,a,n,m=0,sum=0;
	printf("��������");
	scanf("%d",&a);
	printf("����λ��");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		m=10*m+a;
		sum=m+sum;
	}
	printf("ԭʽ����%d\n",sum);
	return 0;
}
