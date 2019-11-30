#include <stdio.h>
#include <string.h>

main()
{
void tongji(char a1[100],char b1[4]);
	char a[100],b[4];
	static int i;
	gets(a);
	tongji(a,b);
	printf("Êä³ö\n");
	for(i=0;i<4;i++)
		printf("5%d",b[i]);

	
}

void tongji(char a1[100],char b1[4])
char a1[100];
int b1[4];
{
	int j;
	for(j=0;a1[j]!='\0';j++)
	{
		if(a1[j]>='a'&&a1[j]<='z'||a1[j]>='A'&&a1[j]<='Z')
			b1[0]=++;
		else if(a1[j]>='0'&&a1[j]<='9')
			b1[1]++;
		else if(a1[j]==' ')
			b1[2]++;
		else 
			b1[3]++;
	}
	
}
