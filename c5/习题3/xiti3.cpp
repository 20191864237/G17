#include <stdio.h>
#include <math.h>
int main()
{
	int m,n,x,y,z;
	printf("输入");
	scanf("%d%d",&m,&n);
	x=m;
	y=n;
	while(y!=0)
	{
    z=x%y;//
	x=y;
	y=z;//这里不会
	}
	printf("公约数为%d\n",x);
	printf("公倍数为%d\n",(m*n)/x);
	return 0;
}