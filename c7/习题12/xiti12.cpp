#include <stdio.h>
#include <math.h>
double root(double n, double p, double q, double r, double t);  
int main()
{
    double x, a, b, c, d;
    printf("ÊäÈë ");       
    scanf("%lf %lf %lf %lf %lf", &x, &a, &b, &c, &d);
    printf("Root=%lf\n", root(x, a, b, c, d));                
    return 0;
}

double root(double n, double p, double q, double r, double t)
{
    double f;
    for (int i=0; fabs(f)>1e-5; f=(p*pow(n, 3)+q*pow(n, 2)+r*n+t)/(3*p*pow(n, 2)+2*q*n+r), n-=f, i++);
    return n;
}
