#include <stdio.h>
#include <stdlib.h>

int main () { 
	FILE * fp;
	fp = fopen("test.txt", "r");
	int size = 25;
	double x_arr[size], x_second_arr[size], norm_x_arr[size];
	int c = 0;
	double hold, xhigh, xlow, max = 100, min = 0;
	while ((fscanf(fp, "%lf", &hold))!= EOF) {
		x_arr[c] = hold;
		if (c == 0) {
			xhigh = x_arr[c];
			xlow = x_arr[c];
		}
		c++;
		if (xhigh < hold)
			xhigh = hold;
			
		if (xlow > hold)
			xlow = hold;
	}
	for (int i = 0; i < size; i ++)
		x_second_arr[i] = x_arr[i] * 3;
	printf("Array 1: \n");
	for (int i = 0; i < size; i ++)
		printf("%.2lf\n", x_arr[i]);
	printf("High: %.2lf\nLow: %.2lf\n", xhigh, xlow);
	printf("Array 2: \n");
	for (int i = 0; i < size; i ++)
		printf("%.2lf\n", x_second_arr[i]);
	printf("Normalized Array: \n");
	for (int i = 0; i < size; i ++) {
		norm_x_arr[i] = min + ((x_arr[i] - xlow)*(max-min)) / (xhigh - xlow);
		printf("%.2lf\n", norm_x_arr[i]);
	}
			
}
