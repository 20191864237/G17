#include <stdio.h>
#include <math.h>
int main(int argc, char* argv[])
{
	double i,pi,t,m;
		i=1;
		t=0.0;
		pi=2.0;
	while(i<=1000000){
			t=sqrt(t+2);
		m=2/t;
		pi=pi*m;
	i++;
		}
	printf("pi=%5.8f\n",pi);
	return 0;
}
