#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI acos(-1.0)
struct shape {
	float line;
	float radius;
	float areacircle;
	float areacylinder;
	float volumecylinder;
};

int main () {
	struct shape c1;
	printf ("Enter the length of the axis: ");
	scanf("%f", &c1.line);
	printf ("Enter the radius of the axis: ");
	scanf("%f", &c1.radius);
	c1.volumecylinder = PI * pow(c1.radius, 2) *  c1.line;
	c1.areacylinder = (2 * PI * c1.radius * c1.line) + (2 * PI * pow(c1.radius, 2));
	c1.areacircle = PI * pow(c1.radius, 2);
	printf ("The area of cross section is: %f", c1.areacircle);
	printf ("\nThe surface area of the cylinder is: %f", c1.areacylinder);
	printf ("\nThe volume of the cylinder is: %f", c1.volumecylinder);
}
