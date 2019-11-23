#include <stdio.h>
int main()
{
	char s1[20],s2[20];
	printf("ÊäÈë");
	gets(s1);
	printf("ÊäÈë");
	gets(s2);
	int i=0,m=0;
	for(i=0;s1[i]!='\0'||s2[i]!='\0';i++)
	{
	 printf("s1[%d]=%d\n",i,s1[i]);
        printf("s2[%d]=%d\n",i,s2[i]);
        m=m+s1[i]-s2[i];
        printf("\n");
    }	
		printf("Êä³ö%d\n\n",m);
		return 0;
}
