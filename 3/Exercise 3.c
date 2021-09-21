#include <stdio.h>
#include <ctype.h>
int main (void) {
	char a;
	printf("Enter a warship class: ");
	scanf("%c", &a);
	a = tolower(a);
	switch (a) {
		case 'a':
			printf("Aircraft Carrier");
			break;
		case 's':
			printf("Submarine");
			break;
		case 'd':
			printf("Destroyer");
			break;
		case 'f':
			printf("Frigate ");
			break;
		case 'c':
			printf("Cruiser");
			break;
		default :
			printf("Ship is unknown");
		}
}
