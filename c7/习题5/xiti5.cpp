#include <stdio.h>
#include <string.h>
char exchange(char a[])
{
	int i,j,k;
	char t;
	k=strlen(a);
	for(i=0,j=k-1;i<k/2;i++,j--)
	{
		t=a[i];
		a[i]=a[j];
		a[j]=t;
	}
	return 0;
}
main ()
{
	char c[10];
	gets(c);
	exchange(c);
	puts(c);
	return 0;
}