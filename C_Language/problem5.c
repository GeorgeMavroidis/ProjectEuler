/*
2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?

*/
#include <stdio.h>
#include <math.h>

int gcd(int a, int b);
int lcm(int a, int b);

int main(void){

	int bound = 20;  
	int large_lcm = 1;

	for(int i = 1; i <= bound; i++){
		int temp_lcm = lcm(large_lcm, i); //Store lowest common multiple
		if(temp_lcm > large_lcm) large_lcm = temp_lcm; // If we found a larger lcm, store it
	}
	printf("%d\n", large_lcm);
	return 0;
}
// Recursive function to return gcd of a and b  
int gcd(int a, int b)  { 
    if (a == 0) 
        return b;  
    return gcd(b % a, a);  
}  
// Function to return LCM of two numbers  
int lcm(int a, int b){  
    return (a*b)/gcd(a, b);  
}  
