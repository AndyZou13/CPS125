#include <stdio.h>

int x, num_of_tens, remainder1;
int f1 (int y) {
	return y/10;
}
int f2 (int y) {
	return y%10;
}
void f3 (int* x_ADDRESS) {
	*x_ADDRESS += 4;
	printf("\nafter f3: %d", *x_ADDRESS);
}
void f4 (int y, int* addr1, int* addr2) {
	*addr1 = f1(y);
	*addr2 = f2(y);
}
int main () {
	while(x < 10 || x > 99){
		printf("Please input a number between 10 and 99: ");
		scanf("%d", &x);
	}
	f4(x, &num_of_tens, &remainder1);
	printf("%d divided by 10 is %d with a remainder of %d",x , num_of_tens, remainder1);

}
