/*By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.

What is the 10 001st prime number?*/

#include<stdio.h>
#include <stdbool.h> 


bool isPrime(int n, int i);

int main(void){
	int bound = 10001;
	long prime_counter = 0, main_counter = 0;
	long result = 0;


	while(prime_counter != bound){
		main_counter ++;
		if(isPrime(main_counter, 2)){
			prime_counter ++;
		}
	}
	printf("The %d prime is %ld\n", bound, main_counter);
	return 0;
}

bool isPrime(int n, int i){
	// Base cases 
    if (n <= 2) 
        return (n == 2) ? true : false; 
    if (n % i == 0) 
        return false; 
    if (i * i > n) 
        return true; 
  
    // Check for next divisor 
    return isPrime(n, i + 1); 

}