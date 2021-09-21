#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define sl 20
typedef struct car {
	char make[sl];
	char model[sl];
	char color[sl];
	char year[sl];
	struct car* next;
}car;

int main () {
	char tmake[sl];
	char tmodel[sl];
	char tcolor[sl];
	char tyear[sl];

	car *p, *start;
	
	start = NULL;
	
	fgets (tmake,sizeof(tmake),stdin);
		tmake[strlen(tmake)-1] = '\0';
	if (strcmp (tmake, "END") == 0)
		exit(0);
	fgets (tmodel,sizeof(tmodel),stdin);
		tmodel[strlen(tmodel)-1] = '\0';
		if (strcmp (tmodel, "END") == 0)
		exit(0);
	fgets (tcolor,sizeof(tcolor),stdin);
		tcolor[strlen(tcolor)-1] = '\0';
		if (strcmp (tcolor, "END") == 0)
		exit(0);
	fgets (tyear,sizeof(tyear),stdin);
		tyear[strlen(tyear)-1] = '\0';
		if (strcmp (tyear, "END") == 0)
		exit(0);
	
	while (1) {
		p = (car *) calloc (1, sizeof(car));
	
		strcpy (p -> make, tmake);
		strcpy (p -> model, tmodel);
		strcpy (p -> color, tcolor);
		strcpy (p -> year, tyear);
	
		p -> next = start;
		start = p;
		printf("new");
		fgets (tmake,sizeof(tmake),stdin);
		if (strcmp (tmake, "END") == 0)
			break;
		fgets (tmodel,sizeof(tmodel),stdin);
		if (strcmp (tmodel, "END") == 0)
			break;
		fgets (tcolor,sizeof(tcolor),stdin);
		if (strcmp (tcolor, "END") == 0)
			break;
		fgets (tyear,sizeof(tyear),stdin);
		if (strcmp (tyear, "END") == 0)
			break;
	}
	p = start;
	while (p != NULL)
	{
   		printf ("%s\n", p -> make);
   		p = p -> next;
	}
	return (0);
}
