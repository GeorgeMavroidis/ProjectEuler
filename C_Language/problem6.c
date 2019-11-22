#include <stdio.h>

int main(void){
	int sum = 0;
	int squared = 0;
	int bound = 100;

	for (int i = 1; i <= bound; i++){
		sum += i;
	    squared += i * i;

	}
	int result = (sum * sum) - squared;

	printf("The Sum Square difference is: %d\n",  result);

	return 0;
}