int sumof(int a, int b){
	
	int sum = 0;
	int i = 0;

	while(i <= (b - a)){
		sum += a + i;
		i++;
	}
	
	return sum;
}
