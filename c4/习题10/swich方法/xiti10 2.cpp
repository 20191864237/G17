#include <stdio.h>
int main()
{
  int i,a,m,m1,m2,m4,m6,m10;
  m1=100000*0.1;
  m2=m1+100000*0.075;
  m4=m2+200000*0.05;
  m6=m4+200000*0.03;
  m10=m6+400000*0.015;
  printf("输入利润:");
  scanf("%d",&i);
  m=i/100000;
  if (m>10)  m=10;
  switch(m)
  {  case 0:m=i*0.1;break;
     case 1:m=m1+(i-100000)*0.075;break;
     case 2:
     case 3: m=m2+(i-200000)*0.05;break;
     case 4:
     case 5: m=m+(i-400000)*0.03;break;
     case 6:
     case 7:
     case 8:
     case 9: m=m6+(i-600000)*0.015;break;
     case 10: m=m10+(i-1000000)*0.01;
  }
   printf("奖金是%d\n",m);
   return 0;
 }