#include<stdio.h>
main()
{
    int i,j,a[10],t;
    printf(" ‰»Î");
    for(i=0;i<10;i++)
    scanf("%d",&a[i]);
    for(j=1;j<10;j++)
    {
        for(i=0;i<(9-j);i++)
        if(a[i]>a[i+1])
        {
            a[i+1]=t;
            a[i+1]=a[i];
            a[i]=t;
        }
    }
    for(i=0;i<10;i++)
    printf("%3d",a[i]);
}
