#include <stdio.h>
#include <stdlib.h>

int b_num, num_sam, num_per_100, total, avg, open, close, num_b;
int times;
FILE * fp;
int main () {
	fp = fopen("huron.txt", "r");
	while ((fscanf(fp, "%d %d ", &b_num, &num_sam))!= EOF) {
	total = 0;
	if (num_sam != 0){	
		for (times = 0; times < num_sam; times++ ) {
		fscanf(fp, "%d", &num_per_100);
		total += num_per_100;
	}
	avg = total / num_sam;
	printf("\n%d", avg);
	num_b += 1;
	if (avg < 3500) {
	printf("\nBeach is open.");
	open += 1;
}
	else {
	printf("\nBeach is closed.");
	close += 1;
}
}
}
printf("\nThere are %d beaches in the file.", num_b);
if (open > 1 || open == 0)
	printf("\nThere are %d open beaches.", open);
	else
	printf("\nThere is %d open beach.", open);
	
printf("\nThere are %d closed beaches.", close);
}
