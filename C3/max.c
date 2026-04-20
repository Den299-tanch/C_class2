#include <stdio.h>

int main(void){
	int a, b, c;

	printf("find the maximum of three integers.\n");
	printf("value of a:"); scanf("%d", &a);
	printf("value of b:"); scanf("%d", &b);
	printf("value of c:"); scanf("%d", &c);

	int max = a;
	if(b > max) max = b;
	if(c > max) max = c;

	printf("max value is %d.\n", max);
	return 0;
}
