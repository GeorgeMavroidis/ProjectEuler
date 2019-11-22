#include<stdio.h>

int main(void){

	long sum = 0;
	long squared = 0;
	long result = 0;
	 
	const int BOUND = 10;
	 
	sum = BOUND * (BOUND+1)/ 2;
	squared = (BOUND * (BOUND + 1) * (2 * BOUND + 1)) / 6;
	result = sum * sum - squared;

	printf("The Sum Square difference is: %ld\n",  result);

	return 0;
}