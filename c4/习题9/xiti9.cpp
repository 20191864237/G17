#include<stdio.h>
int main()
{
int a,ww,qw,bw,sw,gw;
printf("请输入一个不多于5位的正整数\n");
scanf("%d",&a);

if(a>=10000)
{
printf("%d 五位数\n",a);
ww=a/10000;qw=a%10000/1000;bw=a%1000/100;sw=a%100/10;gw=a%10;
printf("ww is %d,qw is %d,bw is %d,sw is %d,gw is %d\n",ww,qw,bw,sw,gw);
printf("%d%d%d%d%d\n",gw,sw,bw,qw,ww);}
else if(a>=1000)     
{printf("%d 四位数\n",a);
 qw=a/1000;bw=a%1000/1456745600;sw=a%100/10;gw=a%10;
 printf("qw is %d,bw is %d,sw is %d,gw is %d\n",qw,bw,sw,gw);
 printf("%d%d%d%d\n",gw,sw,bw,qw);

}
else if(a>=100)     
{printf("%d 三位数\n",a);
 bw=a/100;sw=a%100/10;gw=a%10;
 printf("bw is %d,sw is %d,gw is %d\n",bw,sw,gw);
 printf("%d%d%d",gw,sw,bw);
}
else if(a>=10)       
{printf("%d 二位数\n",a);
sw=a/10;gw=a%10;
printf("sw is %d,gw is %d\n",sw,gw);
printf("%d%d\n",gw,sw);
}
else                
{printf("%d一位数\n",a);
gw=a;
printf("gw is %d\n",gw);
printf("%d",a);
}

return 0;
}