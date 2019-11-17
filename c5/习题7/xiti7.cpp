#include <stdio.h>
int main()
{
	int k1,k2,k3;
	int s1=0,s2=0,s3=0,sum=0;
	for(k1=1;k1<=100;k1++)
		s1=k1+s1;
	for(k2=1;k2<=50;k2++)
		s2=k2*k2+s2;
	for(k3=1;k3<=10;k3++)
		s3=(1/k3)+s3;
	sum=s1+s2+s3;
	printf("sum=%d\n",sum);
	return 0;
}

