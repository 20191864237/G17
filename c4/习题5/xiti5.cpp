#include <stdio.h>
#include <math.h>
#define M 1000
int main()
{
	int a,b;
	printf("����",M);//������
	scanf("%d",&a);
	if(a>M)
	{
	printf("������",M);
	scanf("%d",&a);
	}
	b=sqrt(a);
	printf("%dƽ��������������%d\n",a,b);
	return 0;
}

