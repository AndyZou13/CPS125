#include <stdio.h>
#include <math.h>
#define PI 3.14159265358979323846
double a, b;
int main (void) {
	printf("Please the radius of the sphere: ");
	scanf("%lf", &a);
	b = (4/3) * PI * (pow(a,3));
	printf("The volume of the sphere with a radius of %.4lf is %.4lf", a, b);
	return(0);
}
