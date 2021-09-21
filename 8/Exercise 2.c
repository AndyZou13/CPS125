#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI acos(-1)
#define E 3e+7
struct strength {
	float p;
	float d;
	float stress;
	float strain;
};
int main () {
	struct strength s1;
	float area;
	printf ("Enter the compression load: ");
	scanf ("%f", &s1.p);
	printf ("Enter the diameter: ");
	scanf ("%f", &s1.d);
	area = (PI * pow(s1.d, 2))/4;
	s1.stress = s1.p/area;
	s1.strain = s1.stress/E; 
	printf ("The diameter of the column is %f", s1.d);
	printf ("\nThe load on the column is %f", s1.p);
	printf ("\nThe stress on the column is %f", s1.stress);
	printf ("\nThe strain on the column is %f", s1.strain);
}
