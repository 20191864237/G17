#include <stdio.h>
int main()
{
	int a[4][4]={0};
	int i=0,j=0,n,max,min;
	int h=0,l=0;
	printf(" ‰»Î:\n",&n);	
	scanf("%d",&n);
	for(i=0;i<=4;i++)
	{
	for(j=0;j<=4;j++) 
	{
	}
	}
	for(i=0;i<4;i++)
	{
		max=a[i][0];
		for(j=0;j<3;j++)
		{
			if(a[i][j]>max)
			{
				max=a[i][j];
				l=j;
			}
		}
		min=a[0][l];
		for(i=0;i<4;i++)
		{
			if(a[i][l]<min)
			{
				min=a[i][l];
				h=i;
		}
		}
		if(min==max)
		{
			printf("%d%d",h,l);
			break;
		}
	}
		if(min!=max)
		{
			printf("Œﬁ∞∞ ˝");
		}
		return 0;
}




