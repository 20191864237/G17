#include <stdio.h>
#include <time.h>
int main()
{
	int begintime,endtime;
	int i,k,m,j,q,w,e,r,t,n,a;
	begintime=clock();	
        
    for (n=100;n<1000;n++)
	{
		i=n/100;
		j=n%100/10;
		k=n%10;
		a++;
		if(n==i*i*i+j*j*j+k*k*k)
	  printf("%d\n",n);
	}
     for (n=1000;n<10000;n++)
	{
		i=n/1000;
		j=n%1000/100;
		k=n%100/10;
		m=n%10;
		if(n==i*i*i*i+j*j*j*j+k*k*k*k+m*m*m*m )
			printf("%d\n",n);
	}
         for (n=10000;n<100000;n++)
	{
		q=n/10000;
		i=n%10000/1000;
		j=n%1000/100;
		k=n%100/10;
		m=n%10;
		if(n==i*i*i*i*i+j*j*j*j*j+k*k*k*k*k+m*m*m*m*m+q*q*q*q*q )
			printf("%d\n",n);
	}
     for (n=100000;n<1000000;n++)
	{
		w=n/100000;
		q=n%100000/10000;
		i=n%10000/1000;
		j=n%1000/100;
		k=n%100/10;
		m=n%10;
		if(n==i*i*i*i*i*i+j*j*j*j*j*j+k*k*k*k*k*k+m*m*m*m*m*m+q*q*q*q*q*q+w*w*w*w*w*w )
			printf("%d\n",n);
	}
		 for (n=1000000;n<10000000;n++)
	{
		e=n/1000000;
		w=n%1000000/100000;
		q=n%100000/10000;
		i=n%10000/1000;
		j=n%1000/100;
		k=n%100/10;
		m=n%10;
		if(n==i*i*i*i*i*i*i+j*j*j*j*j*j*j+k*k*k*k*k*k*k+m*m*m*m*m*m*m+q*q*q*q*q*q*q+w*w*w*w*w*w*w+e*e*e*e*e*e*e )
			printf("%d\n",n);
	}
				 for (n=10000000;n<100000000;n++)
	{
		r=n/10000000;
		e=n%10000000/1000000;
		w=n%1000000/100000;
		q=n%100000/10000;
		i=n%10000/1000;
		j=n%1000/100;
		k=n%100/10;
		m=n%10;
		if(n==i*i*i*i*i*i*i*i+j*j*j*j*j*j*j*j+k*k*k*k*k*k*k*k+m*m*m*m*m*m*m*m+q*q*q*q*q*q*q*q+w*w*w*w*w*w*w*w+e*e*e*e*e*e*e*e+r*r*r*r*r*r*r*r )
			printf("%d\n",n);
	}
						 for (n=100000000;n<1000000000;n++)
	{
		t=n%100000000;
		r=n%100000000/10000000;
		e=n%10000000/1000000;
		w=n%1000000/100000;
		q=n%100000/10000;
		i=n%10000/1000;
		j=n%1000/100;
		k=n%100/10;
		m=n%10;
		if(n==i*i*i*i*i*i*i*i*i+j*j*j*j*j*j*j*j*j+k*k*k*k*k*k*k*k*k+m*m*m*m*m*m*m*m*m+q*q*q*q*q*q*q*q*q+w*w*w*w*w*w*w*w*w+e*e*e*e*e*e*e*e*e+r*r*r*r*r*r*r*r*r+t*t*t*t*t*t*t*t*t )
			printf("%d\n",n);
	}
		endtime=clock();
		printf("\n\nÓÃÊ±%dms\n",endtime-begintime);
	
}

