#include <stdio.h>
int main()
{
	char s1[20],s2[20];
	int i;
	printf("����\n");
	gets(s2);
	for(i=0;s1[i]=s2[i];i++);
	printf("���\n");
	printf("%s",s1);
}


