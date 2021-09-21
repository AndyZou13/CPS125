#include <stdio.h>
#define FALSE 0
#define TRUE 1
FILE * fp;
int checkdiag (int matrix[][100], int size) {
	int save = 0;
	for (int i = 0; i < size; i ++) {
		if (matrix[i][i] != save && i != 0) {
			return FALSE;
		}
		save = matrix[i][i];
	}
	return TRUE;
		
}
int main () {
	int size, matching = FALSE;
	fp = fopen("test.txt", "r");
	fscanf (fp, "%d", &size);
	int arr[size][100];
	for (int i = 0; i < size; i++) {		
		for (int j = 0; j < size; j++) {
			fscanf (fp, "%d", &arr[i][j]);
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	matching = checkdiag(arr, size);
	if (matching == TRUE)
		printf("The matrix is %d x %d and all the numbers on the main diagonal are the same.", size, size);
	else
		printf("The matrix is %d x %d and all the numbers on the main diagonal are not same.", size, size);
}
