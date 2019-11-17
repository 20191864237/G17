#include <stdio.h>
#include <math.h>
void main()
{
	int i;
	double h=100,s=100;
	for(i=1;i<=10;i++)
	{
		h=h/2;
		if(i==1)
			continue;
		s=2*h+s;
	}
	printf("共经过%lf米，反弹%lf米\n",s,h);
}
