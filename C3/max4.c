#include <stdio.h>

int max4(int, int, int, int);


int main(void){
	printf("max of %d %d %d %d is %d\n", 2, 5, 6, 1, max4(2, 5, 6, 1));
}

int max4(int a, int b, int c, int d){
	int max = a;
	if(max < b) max = b;
	if(max < c) max = c;
	if(max < d) max = d;

	return max;
}
