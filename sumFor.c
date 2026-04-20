#include <stdio.h>

int main(void){

	int n;

	puts("Calculates the sum from 1 to n.");

	printf("Value of n:");
	scanf("%d", &n);

	int sum = 0;

	for(int i = 1; i <= n; i++){
		sum += i;
	}

	printf("The sum from 1 to %d is %d.\n", n, sum);

	return 0;
}
