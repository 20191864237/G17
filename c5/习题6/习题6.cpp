#include <stdio.h>
int main()
{
	int i,sum=0,s=1;
	for(i=1;i<=20;i++)//从1开始 到20
	{
		s=s*i;//
		sum=sum+s;
		printf("sum=%d",sum);
	}
	return 0;
}