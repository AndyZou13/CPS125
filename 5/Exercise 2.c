#include <stdio.h>
#include <math.h>
#include <complex.h>
#include <stdlib.h>

int a, b, c; 
float root1, root2, rt1a;
float complex rt1, rt2;

void quadRoot (int a, int b, int c, float* r1, float* r2, float* r1a, float complex* rt1, float complex* rt2) {
	int negB, fac, ta, disc;
	float hold;
	negB = -b;
	fac = 4 * a * c;
	ta = 2 * a;
	disc = (pow(b, 2)) - fac;
	if (disc == 0){
		*r1 = negB/ta;
		*r2 = negB/ta;
	}
	else {
		if (disc > 0){
		hold = sqrt(disc);
		*r1 += (negB + hold)/ta * 1.0;
		*r2 += (negB - hold)/ta * 1.0;
		}
		else  {
			*rt1 = ((sqrt(-disc))/2) * I;
			*rt2 = ((sqrt(-disc))/2) * I;
			*r1a = negB/ta;
		}
	}
}
int main () {
	scanf("%d %d %d", &a, &b, &c);
	quadRoot(a, b, c, &root1, &root2, &rt1a, &rt1, &rt2);
	if (rt1 && rt2)
		printf("The roots of %d(x^2)+(%d)x+(%d) is %f + %fi and %f - %fi ", a, b, c, rt1a, cimag(rt1), rt1a, cimag(rt2));
	else
		printf("The roots of %d(x^2)+(%d)x+(%d) is %f and %f", a, b, c, root1, root2);
}	
