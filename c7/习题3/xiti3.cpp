#include <stdio.h>
int prime(int a)
{
    int i,m=sqrt(a);
	for(i=2;i<m+1;i++)
		if(a%i==0)
			break;
		if(i<m+1)
			return 0;//������
		else
			return 1;//���ؼ�
}
int main()
{
		int a,b;
		printf("����");
		scanf("%d",&a);
		b=prime(a);
		if(b)
			printf("%d������\n",a);
		else
			printf("%d��������\n",a);

	
}


