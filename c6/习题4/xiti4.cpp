#include <stdio.h>
int main()
{
	int a[5]={1,2,4,5,6};
	int i,j,m;
	printf(" ‰»Î:\n");
	scanf("%d",&i);
	for(j=0;j<5;j++)
	{
	if
	(i<a[j])
	{
	m=a[j];
	a[j]=i;
	i=m;
	}
	printf("%d\n",a[j]);
	}
	printf("%d\n",i);
}


