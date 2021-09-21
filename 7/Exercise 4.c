#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
	char *word = calloc(256, sizeof(int));
	fgets(word, 256, stdin);
	int size = strlen(word)-1;
	printf("How many characters in that sentence?: %d Characters(Space Included)\n", size); //Part A
	
	int words = 0;
	for (int i = 0; i < size; i ++)
		if (word[i] == ' ')
			words++;
		words++;
	printf("How many words in that sentence?: %d Words\n", words); //Part B
	
	char *back = calloc(256, sizeof(int));
	int max = strlen(word)-1;
	for (int i = 0; i < size; i ++)
		back[i] = word[max-i-1];
	printf("The sentence backwards: %s\n", back); //Part C
	
	char *back1 = calloc(256, sizeof(int));
	int i = 0, newMax = max;
		for (int j = 0; j < size; j ++) {
			if (word[max-j] == ' ') {
				for (int k = max-j+1; k < newMax; k ++) {
					back1[i] = word[k];
					i++;
				}
				newMax = max-j;
				back1[i] = ' ';
				i ++;
			}
			if (j == max-1) {
				for (int k = 0; k < newMax; k ++) {
					back1[i] = word[k];
					i++;
				}
			}
			
		}
	printf("The words shown in reverse order: %s", back1); //Part D
}
