#include <stdio.h>
char abc(char c[], char d[])
{
	int i,j=0;
    for(i=0;c[i]='\0';i++)
        if(c[i]==97||c[i]==101||c[i]==105||
        c[i]==111||c[i]==117||c[i]==65||
        c[i]==69||c[i]==73||c[i]==85) 
		{
			d[j]=c[i];
			j++;
			return 0;///
}
}
main(void)
{
	char a[10],b[10];
	printf("ÊäÈë£º\n");
	gets(a);
	gets(b);
	abc(a,b);
	printf("Êä³öÔªÒô×ÖÄ¸\n");
	puts(b);
return 0;
}