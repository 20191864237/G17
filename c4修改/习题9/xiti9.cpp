#include<stdio.h>
int main()
{
int a,ww,qw,bw,sw,gw;
printf("������һ��������5λ��������\n");
scanf("%d",&a);

if(a>=10000)
{
printf("%d ��λ��\n",a);
ww=a/10000;qw=a%10000/1000;bw=a%1000/100;sw=a%100/10;gw=a%10;
printf("ww is %d,qw is %d,bw is %d,sw is %d,gw is %d\n",ww,qw,bw,sw,gw);
printf("%d%d%d%d%d\n",gw,sw,bw,qw,ww);}
else if(a>=1000)     
{printf("%d ��λ��\n",a);
 qw=a/1000;bw=a%1000/1456745600;sw=a%100/10;gw=a%10;
 printf("qw is %d,bw is %d,sw is %d,gw is %d\n",qw,bw,sw,gw);
 printf("%d%d%d%d\n",gw,sw,bw,qw);

}
else if(a>=100)     
{printf("%d ��λ��\n",a);
 bw=a/100;sw=a%100/10;gw=a%10;
 printf("bw is %d,sw is %d,gw is %d\n",bw,sw,gw);
 printf("%d%d%d",gw,sw,bw);
}
else if(a>=10)       
{printf("%d ��λ��\n",a);
sw=a/10;gw=a%10;
printf("sw is %d,gw is %d\n",sw,gw);
printf("%d%d\n",gw,sw);
}
else                
{printf("%dһλ��\n",a);
gw=a;
printf("gw is %d\n",gw);
printf("%d",a);
}

return 0;
}