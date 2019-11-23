#include <stdio.h>
void abc(int n)
{
	int a,b,c,d;
	a=n/1000;
	b=(n-a*1000)/100;
	c=(n-a*1000-b*100)/10;
	d=n-a*1000-b*100-c*10;
	printf(" ‰≥ˆ\n");
	printf("%d%d%d%d\n",a,b,c,d);
}
main()
{
	int n;
	printf(" ‰»Î\n");
	scanf("%d",&n);
	abc(n);
}


