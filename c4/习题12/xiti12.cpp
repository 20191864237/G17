#include <stdio.h>
#include <math.h>
int main()
{
	int x,y,h;
	printf("输入");
	scanf("%d,%d",&x,&y);
	if(pow(x-2,2)+pow(y-2,2)<=1||pow(x-2,2)+pow(y+2,2)<=1||pow(x+2,2)+pow(y-2,2)<=1||pow(x+2,2)+pow(y+2,2)<=1)
		h=10;//通过圆的方程的几何意义来判断该点是否在四个圆的范围内
	else
		h=0;
	printf("高度为%d\n",h);
	return 0;
}//发现问题：当输入坐标（2,2）即圆心时，高度却为零，无法解决。



