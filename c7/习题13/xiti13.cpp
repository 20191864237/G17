#include <stdio.h>
#include <math.h>
double p(int x,int n)
{
	double t,t1,t2;
	if(n==0)
		return 1;
	else if(n==1)
		return x;
	else
			  t1=(2*n-1)*x*p(x,(n-1));			
              t2=(n-1)*p(x,(n-2));
              t=(t1-t2)/n;
              return t;
}
int main()
{
				int x,n;
				printf("ÊäÈë");
				scanf("%d%d",&x,&n);
				p(x,n);
				printf("%d",p(x,n));
				return 0;
}
