#include <stdio.h>
int prime(int a)
{
    int i,m=sqrt(a);
	for(i=2;i<m+1;i++)
		if(a%i==0)
			break;
		if(i<m+1)
			return 0;//返回真
		else
			return 1;//返回假
}
int main()
{
		int a,b;
		printf("输入");
		scanf("%d",&a);
		b=prime(a);
		if(b)
			printf("%d是素数\n",a);
		else
			printf("%d不是素数\n",a);

	
}


