#include <stdio.h>
#include <math.h>
int a, b, c, d, e, f, g;
double h;
int main (void) {
	printf("Enter a number: ");
	scanf("%d", &a);
	printf("Enter a number: ");
	scanf("%d", &b);
	printf("Enter a number: ");
	scanf("%d", &c);
	printf("Enter a number: ");
	scanf("%d", &d);
	e = a+b+c+d;
	printf("The sum of these 4 numbers is: %d ", e);
	f = (a+b)-(c+d);
	printf("The sum of the first two numbers minus the sum of the last two is: %d", f);
	g = (pow(a,2))+(pow(b,2))+(pow(c,2))+(pow(d,2));
	printf("\nThe sum of the squares of the four numbers is: %d", g);
	h = (sqrt(g))/e;
	printf("\nThe exact quotient of the square root of the sum \nof the squares of the numbers, divided by the sum of all the numbers is: %lf", h);
	return(0);
}
