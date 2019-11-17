#include <stdio.h>
int main()
{
	int a[3][3]={{1,2,3},{2,4,6},{3,6,9}};
	int i,j,sum;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		sum=a[0][0]+a[0][2]+a[1][1]+a[2][0]+a[2][2];
	}
	printf("%d\n",sum);
return 0;
}
