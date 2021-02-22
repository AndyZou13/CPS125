#include <stdio.h>
#include <math.h>
#define PI 3.14159265358979323846
int
main(void)
{
double a, b, c, d, e, f, g;
printf("Please enter the length of the long side\n");
scanf("%lf", &a);
printf("Please enter the short of the long side\n");
scanf("%lf", &b);
d = pow(a,2);
e = pow(b,2);
f = (d+e)/2;
g = sqrt(f);
c = 2*PI*g;
printf("The circumference of the ellipse is %lf\n",c);
}
