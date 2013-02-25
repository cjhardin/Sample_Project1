#include <stdio.h>
int main(){
	int x; 
	printf("Enter a number: ");
	scanf("%d", &x);

	if (x > 24) {
		printf("Number entered was %d and it is greater than 24\n", x);
	} else {
		printf("Number entered was %d and it is less than 24\n", x);
	}

	return 0;
}