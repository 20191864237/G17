#include <stdio.h>
void main()
{
int i,j,s;
 for(i=2;i<=1000;i++)
 {
    s=0;
   for(j=1;j<i;j++)
   {
      if(i%j==0) 
        s=s+j;//数字i的真因子之和 
        }
            if(i==s)//如果数字i因子之和=i 
            {
                printf("%d its factors are ",i);//输出完美数 
                for(j=1;j<i;j++)
                {
                    if(i%j==0) 
                    printf("%d,",j);//输出完美数真因子 
                }
                    printf("\n");
          }
    }
}
