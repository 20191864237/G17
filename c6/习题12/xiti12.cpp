
#include<stdio.h>
#include<string.h>
main()
{
    char a[10],b[10];
    int i;
    printf(" ‰»Î£∫\n");
    gets(a);
    for(i=0;a[i]!='\0';i++)
    {
        if('A'<=a[i]&&a[i]<='Z') b[i]=155-a[i];//'A'+'Z'=155 
        else if('a'<=a[i]&&a[i]<='z') b[i]=219-a[i];//'a'+'z'=219
        else b[i]=a[i];
    }
    b[i]=0;
    printf("‘≠√‹¬Î£∫\n");
    puts(a);
    printf("∑≠“Î£∫\n");
    puts(b);
}
