#include <stdio.h>
int main()
{
	int M;
	printf("����ɼ�\n");
	scanf("%d",&M);

	if(M>90 && M<=100)
	printf("�ȼ�ΪA\n");
	else if(M>=80 && M<90)
	printf("�ȼ�ΪB\n");
	else if(M>=70 && M<80)
	printf("�ȼ�ΪC\n");
	else if(M>=60 && M<70)
	printf("�ȼ�ΪD\n");
    else if(M>=0 && M<60)
	printf("�ȼ�ΪE\n");
	else
	printf("������Χ\n");
	return 0;
}
	
	
  