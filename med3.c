int med3(int a, int b, int c){
	if((b >= a && c <= a) || (b <= a && c >=a))
		return a;
	else if((a > b && c < b) || (a < b && c > b))
		return b;
	return c;
}

#include <stdio.h>

int main(void){
	printf("med value of %d, %d, %d is %d.\n", 3, 6, 4, med3(3, 6, 4));
}
