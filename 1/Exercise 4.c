#include <stdio.h>

int
main(void)
{
double a;
long b;
printf("Please enter a real number\n");
scanf("%lf", &a);

printf("The number with 1 decimal place is %.1lf\n", a);
b = (long)a;
b /= 100;
b *= 100;
printf("The number rounded to the nearest hundred value is %ld\n", b);
b /= 1000;
b *= 1000;
printf("The number rounded to the nearest thousand value is %ld\n", b);
}
