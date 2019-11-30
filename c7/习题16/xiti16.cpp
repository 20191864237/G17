#include<stdio.h>
#include<string.h>
main() 
{
    char a[100];
    int i,k,sum=0;
    printf("请输入十六进制数:\n");
    gets(a);
    for (i=strlen(a)-1,k=1;i>=0;i--) 
    {
        if(a[i]>='0'&&a[i]<='9')
            sum+=(a[i]-'0')*k; 
            else if(a[i]>='A'&&a[i]<='F')
               sum+=(a[i]-'A'+10)*k;
                else if(a[i]>='a'&&a[i]<='f')                                                                 
                  sum+=(a[i]-'a'+10)*k;
                     k*=16;                                                                         
    }
    printf("\n十六进制数%s转换成十进制数为:\n%d",a,sum);
}
