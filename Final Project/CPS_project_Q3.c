#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#define SUB_1 10
#define NOT_FOUND -1
#define SUB_2 7
int search(const char[][SUB_2], const char[], int);

int main(void)
{
	char reply, char_left;
	int i, counter, value;
	int no_error=1;
	double answer=0.0;
	
	char COLOUR_CODES[SUB_1][SUB_2]={"black", "brown", "red", "orange", 
		"yellow", "green", "blue", "violet", "grey", "white"};
	char target[SUB_2];
	
	do{
		printf("Enter the colours of the resistors's three bands,"); 
		printf("beginning with\n");
		printf("the band nearest the end. Type the colours in lowercase");
		printf(" letters only,");
		printf("NO CAPS.\n\n");
		
		for(counter=1; counter<4 && no_error; counter++){
			printf("Band%d=>", counter);
			scanf("%s", target);
			
			value=search(COLOUR_CODES, target, SUB_1);
			if(value != NOT_FOUND){
				switch(counter){
					case 1:
						answer=value*10;
						break;
					case 2:
						answer+=value;
						break;
					case 3:
						if(value>3)
							answer*=pow(10, (value-3));
						else
							for(i=0; i<(3-value); i++)
								answer/=10;
							}
						}
			else
				no_error=0;
		}
		if(no_error)
			printf("Resistance value:%.3f kilo-ohms\n\n", answer);
		else
			printf("Invalid Colour:%s\n\n", target);
			
		printf("Do you want to decode another resistor?\n=> ");
		scanf("%c%c", &char_left, &reply);
		printf("\n");
	}while(reply=='y');
}
int search(const char COLOUR_CODES[][SUB_2], const char target[],int size){
	int i, j;
	int length, counter=0;
	int found=0;
	int where=0;
	
	length=strlen(target);
	for(i=0; i<size && !found; i++)
	{
		for(j=0; j<length; j++)
			if(COLOUR_CODES[i][j]==target[j])
				counter++;
		if(counter == length)
			found=1;
		else
			counter=0;
			}
		--i;
		if(found)
			where=i;
		else 
			where=NOT_FOUND;
	
	return where;
}
