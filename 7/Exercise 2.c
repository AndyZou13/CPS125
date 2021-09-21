#include <stdio.h>
#include <stdlib.h>
FILE *fp;

/*void array_out(int arr_param[ ], int size) {
	for (int i = 0; i < size; i ++)
		printf("%d", arr_param[i]);
}*/
int count_zeros (int arr[ ], int size) {
	int num = 0;
	for (int i = 0; i < size; i ++)
		if (arr[i] == 0)
			num ++;
	return num;
}
int count_negs (int arr[ ], int size) {
	int num = 0;
	for (int i = 0; i < size; i ++)
		if (arr[i] < 0)
			num ++;
	return num;
}
int main () {
	int *ptr_1;
	ptr_1 =(int *)calloc(1, sizeof(int));
	*ptr_1 = 7;
	printf("Single: %d\n", *ptr_1);
	int *arr;
	arr =(int *)calloc(40, sizeof(int));
	for (int i = 0; i < 5; i ++) {
		arr[i] = i;
	}
	printf("Array of 5: ");
	for (int i = 0; i < 5; i ++) {
		printf("%d ", arr[i]);
	}
	free (arr);
	int how_many, scan;
	fp = fopen("test1.txt", "r");
	
	fscanf (fp, "%d", &how_many);
	
	arr = (int *)calloc(how_many, sizeof(int));
	
	for (int i = 0; i < how_many; i ++) {
		fscanf (fp, "%d", &scan);
		arr[i] = scan;
	}
	printf("\nOutput of file: ");
	for (int i = 0; i < how_many; i ++) {
		printf("%d ", arr[i]);
	}
	//array_out(arr, how_many);
	printf("\nNumber of Zeros: %d", count_zeros(arr, how_many));
	printf("\nNumber of Negatives: %d", count_negs(arr, how_many));
}
