#include <stdio.h>
#include <math.h>
void  main()
{
	int i,j,a[100],b[100];
	for (i=1;i<=100;i++)
	{
		a[i]=i+1;
		for (j=1;j<sqrt(a[i]);j++)
		{
			b[j]=j+1;
			if
				(a[i]%b[j]==0)
				break;
		}
		if
			(a[j]>sqrt(a[i]))
			printf("%d\n",a[i]);
	}
}

		