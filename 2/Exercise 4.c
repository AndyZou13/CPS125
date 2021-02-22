#include <stdio.h>
#include <math.h>

double a, b, c;
int main (void) {
printf("Please enter an angle of the triangle: ");
scanf("%lf", &a);
printf("Please enter an angle of the triangle: ");
scanf("%lf", &b);
c = 180 - a - b;
printf("The third angle of the triangle is: %.3lf", c);
return(0);
}
