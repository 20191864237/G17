#include <stdio.h>
int main()
{
	int y,m,d,total;
   
	printf("输入日期\n");
	scanf("%d%d%d",&y,&m,&d);
	if (y%400==0 || (y%100!=0 && y%4==0))
    if(m==1)
		total=d;
	if(m==2)
		total=d+31;
	if(m==3) 
		total=d+29+31;
	if(m==4)
		total=d+31+29+31;
	if(m==5)
		total=d+31+30+29+31;
	if(m==6)
		total=d+31+31+29+30+31;
	if(m==7)
		total=d+31+30+29+31+31+30;
	if(m==8)
		total=d+31+29+31+30+31+30+31;
	if(m==9)
		total=d+31+29+31+30+31+30+31+31;
	if(m==10)
		total=d+31+29+31+30+31+30+31+31+30;
	if(m=11)
        total=d+31+29+31+30+31+30+31+31+30+31;
	if(m=12)
       total=d+31+29+31+30+31+30+31+31+30+31+30;
	else
        if(m==1)
		total=d;
	if(m==2)
		total=d+31;
	if(m==3) 
		total=d+28+31;
	if(m==4)
		total=d+31+28+31;
	if(m==5)
		total=d+31+30+28+31;
	if(m==6)
		total=d+31+31+28+30+31;
	if(m==7)
		total=d+31+30+28+31+31+30;
	if(m==8)
		total=d+31+28+31+30+31+30+31;
	if(m==9)
		total=d+31+28+31+30+31+30+31+31;
	if(m==10)
		total=d+31+28+31+30+31+30+31+31+30;
	if(m=11)
        total=d+31+28+31+30+31+30+31+31+30+31;
	if(m=12)
       total=d+31+28+31+30+31+30+31+31+30+31+30;
	printf("第%d天",total);
	return 0;
}
