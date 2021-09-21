#include <stdio.h>
#include <stdlib.h>
#define FALSE 0
#define TRUE 1
FILE * fp;
int checkdiag (int ** matrix, int size) {
	int save = 0;
	for (int i = 0; i < size; i ++) {
		if (matrix[i][i] != save && i != 0) {
			return FALSE;
		}
		save = matrix[i][i];
	}
	return TRUE;
		
}
int checkdiag2 (int ** matrix, int size) {
	int save = 0;
	for (int i = 0; i < size; i ++) {
		int j = size-1; 
			if (matrix[i][j] != save && i != 0) 
				return FALSE;
		save = matrix[i][j];
		size--;
	}
	return TRUE;
		
}
int main () {
	int size, matching = FALSE;
	fp = fopen("mat1.txt", "r");
	fscanf (fp, "%d", &size);
	int **arr = calloc(size, sizeof(int*));
	for (int i = 0; i < size; i++) {	
		arr[i] = calloc (size, sizeof(int));
		for (int j = 0; j < size; j++) {
			fscanf (fp, "%d", &arr[i][j]);
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	matching = checkdiag(arr, size);
	if (matching == TRUE)
		printf("The matrix is %d x %d and all the numbers on the main diagonal are the same.\n", size, size);
	else
		printf("The matrix is %d x %d and all the numbers on the main diagonal are not same.\n", size, size);
	matching = checkdiag2(arr, size);
	if (matching == TRUE)
		printf("The matrix is %d x %d and all the numbers on the anti diagonal are the same.", size, size);
	else
		printf("The matrix is %d x %d and all the numbers on the anti diagonal are not same.", size, size);
}
