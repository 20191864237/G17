#include <stdio.h>
#include <math.h>
int main()
{
	double pi=1.0,n=3.0,t=1.0/3.0,m=1.0;

	while (t>= 1e-8) {
		pi=pi+t;
		n=n+2;
		m++;
		t=t*(m/n);		
	}
	pi=2*pi;
	printf("pi=%10.8f\n", pi);

	return 0;
}