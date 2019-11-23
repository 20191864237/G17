#include <stdio.h>
int main()
{
	int i,j,k;
	char a[10],b[10],c[20]={0};
	 gets(a);
	 gets(b);
	 for(i=0;a[i]!='\0';i++) 
		c[i]=a[i];
	 for(j=0;a[j]!='\0';j++) 
		c[i+j]=b[i];
    
	 for(k=0;c[k]!='\0';k++) 
		printf("%c",c[k]);
    printf("%c",c);
    return 0;
}






