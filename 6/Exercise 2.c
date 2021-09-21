#include <stdio.h>
#include <stdlib.h>

int main  () {
	FILE * fp;
	fp = fopen("water.txt", "r");
	int monthly_water_arr[50], count_arr[7];
	int num_months = 0, hold;
	while ((fscanf(fp, "%d", &hold))!= EOF) {
		monthly_water_arr[num_months] = hold;
		num_months++;
	}
	for (int i = 0; i < num_months; i ++) {
		printf("Month %d: %d\n", i + 1, monthly_water_arr[i]);
	}
	printf("10M Gals water per day:\n");
	for (int i = 0; i < 7; i++) {
		count_arr[i] = 0;
		for (int j = 0; j < num_months; j++) {
			if (monthly_water_arr[j] >= 71+(i*10) && monthly_water_arr[j] <= 80+(i*10))
				count_arr[i]++;
		}
		if (count_arr[i] != 0)
			printf("%d - %d: %d\n", 71+(i*10), 80+(i*10), count_arr[i]);
	}
}
