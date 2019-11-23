#include <stdio.h>
int main()
{
	int i,j;
	int a[10][10]={1};
	for(i=1;i<10;i++)//第一层循环i决定行数。
	{
		a[i][0]=1;
	for(j=1;j<=i;j++)//第二层循环决定列数。
	{
		a[i][j]=a[i-1][j-1]+a[i-1][j];//杨辉三角里面的数等于上面两个数的和。
	}
	}
	for(i=0;i<10;i++)//打印二维数组。
	{
		for(j=0;j<=i;j++)
		printf("%5d",a[i][j]);
		printf("\n");//每次都要换行。
	}
	return 0;
}

		


	
