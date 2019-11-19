/*

If we list all the natural numbers below 10 that are multiples 
of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
Find the sum of all the multiples of 3 or 5 below 1000.

*/


#include <stdio.h>

int main(){
	int goal = 1000;
	int multiples = 0;

	for(int i = 0; i < goal; i++){
		if(i % 3 == 0 && i % 5 == 0){
			multiples += i;
		} else 
		if(i % 3 == 0){
			multiples += i;
		} else
		if(i % 5 == 0){
			multiples += i;
		}
	}
	
	printf("%d\n", multiples);

	return 0;
}