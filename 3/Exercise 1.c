#include <stdio.h>

float a1, a2, t1, t2, avg;
char grade;

int main (void) {
	printf("Enter Assignments Grades: ");
	scanf("%f %f", &a1, &a2);
	printf("Enter Test Grades: ");
	scanf("%f %f", &t1, &t2);
	avg = (a1+a2+t1+t2)/4;
	if (avg >= 80){
		grade = 'A';
	}
	else {
		if (avg >= 70) {
			grade = 'B';
		}
		else {
			if (avg >= 60) {
				grade = 'C';
			}
			else {
				if (avg >= 50) {
					grade = 'D';
				}
				else {
					grade = 'F';
				}
			}
		}
	}
	printf("The average is: %.2f%% \n", avg);
	printf("The letter grade is: %c", grade);
}
