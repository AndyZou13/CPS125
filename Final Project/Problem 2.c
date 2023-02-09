#include <stdio.h>
#define SIZE_OF_ARRAY 10
#define TRUE 1
#define FALSE 0
#define NOT_FOUND -1

int binary_srch(const int search_array[], int target, int size) {
	int top = size - 1, bottom = 0, middle, index, found = FALSE;
	while (bottom <= top && found == FALSE) {
		middle =(top+bottom)/2;
	if (target == search_array[middle]){
		found = TRUE;
		index = middle;
		return(found);
	}
	else if (target < search_array[middle])
		top = middle-1;
	else
		bottom = middle+1;
	}
	return(found);
}

int main () {
	int arr[SIZE_OF_ARRAY], input;
	for (int i = 1; i < SIZE_OF_ARRAY + 1; i ++){ //since SIZE_OF_ARRAY is set at 10, it can only hold 10 numbers to be looked through
		arr[i-1] = i;
	}
	printf("Enter a number from 1-10: ");
	scanf("%d", &input); // grabs input on what number to look for
	int f = binary_srch(arr, input, SIZE_OF_ARRAY);
	printf("%d\n(1 is found, 0 is not found)", f);
}
