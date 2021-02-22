#include <stdio.h>
#include <math.h>
int a, b, c, d;
double a1, b1, c1, d1, a2, b2, c2, d2;
int main (void) {
	printf("Please enter a distance: ");
	scanf("%d", &a);
	printf("Please enter a distance: ");
	scanf("%d", &b);
	printf("Please enter a distance: ");
	scanf("%d", &c);
	printf("Please enter a distance: ");
	scanf("%d", &d);
	a1 = a*1.094;
	b1 = b*1.094;
	c1 = c*1.094;
	d1 = d*1.094;
	a2 = a*0.0006215;
	b2 = b*0.0006215;
	c2 = c*0.0006215;
	d2 = d*0.0006215;
	printf("Distance in: m     yard        ft");
	printf("\n             %d   %.4lf    %.4lf", a, a1, a2);
	printf("\n             %d   %.4lf    %.4lf", b, b1, b2);
	printf("\n             %d   %.4lf    %.4lf", c, c1, c2);
	printf("\n             %d   %.4lf    %.4lf", d, d1, d2);
	return(0);
}
