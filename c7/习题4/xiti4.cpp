#include <stdio.h>
int exchange(int b[3][3])
int b[3][3];
{
	int i,j,n;

	for(i=0;i<3;i++)
	for(j=0;j<3;j++)
	{
		t=b[i][j];
		b[i][j]=b[j][i];
		b[j][i]=t;
	}
}
 main()
	{
		int i,j,a[3][3]={0};
		printf("����");
		for(i=0;i<3;i++)
		for(j=0;j<3;j++)
		scanf("%d",&a[i][j]);
		for(i=0;i<3;i++)
		{
		for(j=0;j<3;j++)
		printf("ԭ����%d\n",a[i][j]);
		}
		exchange(a[i][j]);
		for(i=0;i<3;i++)
		{
		for(j=0;j<3;j++)
		printf("����Ϊ%d\n",a[i][j]);
		}
	return 0;
}







