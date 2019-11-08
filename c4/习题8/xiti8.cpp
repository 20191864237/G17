#include <stdio.h>
int main()
{
	int M;
	printf("输入成绩\n");
	scanf("%d",&M);

	if(M>90 && M<=100)
	printf("等级为A\n");
	else if(M>=80 && M<90)
	printf("等级为B\n");
	else if(M>=70 && M<80)
	printf("等级为C\n");
	else if(M>=60 && M<70)
	printf("等级为D\n");
    else if(M>=0 && M<60)
	printf("等级为E\n");
	else
	printf("超出范围\n");
	return 0;
}
	
	
  