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
        s=s+j;//����i��������֮�� 
        }
            if(i==s)//�������i����֮��=i 
            {
                printf("%d its factors are ",i);//��������� 
                for(j=1;j<i;j++)
                {
                    if(i%j==0) 
                    printf("%d,",j);//��������������� 
                }
                    printf("\n");
          }
    }
}
