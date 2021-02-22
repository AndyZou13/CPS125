#include <stdio.h>
#include <math.h>

int a, b, c, d;

int main(void) {
	printf("please enter an integer: ");
	scanf("%d", &a);
	printf("please enter an integer: ");
	scanf("%d", &b);
	if (a == b) {
		c = a + b;
		c *=3;
		printf("The triple of their sum is: %d", c);
		return(0);
	}
	else {
		d = a + b;
		printf("Their sum is: %d", d);
		return(0);
	}
}
