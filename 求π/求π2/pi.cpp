#include <stdio.h>
int main()
{
	int i=1,u=1;
	double n=2,m=3,s,sum1=1,a=4,b=3,c,sum2=1,sum3=1,sum4;
	for(i=1;i<=100000000;i++)
	{
		s=n/m;
		sum1=sum1*s;
		m=m+2;
		n=n+2;
	}  
	for(u=1;u<=100000000;u++)
	{
		c=a/b;
		sum2=sum2*c;
		a=a+2;
		b=b+2;
	}
	sum3=sum1*sum2;
	sum4=4*sum3;
	printf("%lf",sum4);
		return 0;
}

		
