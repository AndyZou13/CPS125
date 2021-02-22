#include <stdio.h>
#include <math.h>

int a, b, c, q, w, e;
int main (void) {
	printf("Please enter an integer: ");
	scanf("%d", &a);
	printf("Please enter an integer: ");
	scanf("%d", &b);
	printf("Please enter an integer: ");
	scanf("%d", &c);
	if (a>=b && a>=c)
		q = a;
	else if (a<=b && a<=c)
		e = a;
	else 
		w = a;
		
	if (b>=a && b>=c && q == 0)
		q = b;
	else if (b<=a && b<=c && e == 0)
		e = b;
	else 
		w = b;
		
	if (c>=b && c>=a && q == 0)
		q = c;
	else if (c<=b && c<=a && e == 0)
		e = c;
	else 
		w = c;
	
	printf("The numbers in descending order is %d %d %d", q, w, e);
	return (0);
}
		
		
