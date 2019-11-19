/* 

Problem Definition: A palindromic number reads the same both ways. 
The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
Find the largest palindrome made from the product of two 3-digit numbers.

*/

#include <stdio.h>
#include <math.h>

int largestPalindrome(int n);

int main(void){
	int n_digits = 3;
	int largest_palindrome = largestPalindrome(n_digits);

  	printf("\nThe largest palindrome of %d is: %d\n", n_digits, largest_palindrome);

	return 0;
}

int largestPalindrome(int n) 
{ 
    int upper_limit = 0; 
  
    // Loop to calculate upper bound - (largest number of n-digit) 
    for (int i = 1; i <= n; i++) { 
        upper_limit *= 10; 
        upper_limit += 9; 
    } 
  
    // Largest number of n-1 digit.  One plus this number is lower limit which is product of two numbers. 
    int lower_limit = 1 + upper_limit / 10; 
  
    // Initialize result 
    int max_product = 0;  
    for (int i = upper_limit;  i >= lower_limit;  i--) { 
        for (int j = i; j >= lower_limit; j--) { 
            // Calculating product of two n-digit numbers 
            int product = i * j; 
            if (product < max_product) 
                break; 
            int number = product; 
            int reverse = 0; 
  
            // Calculating reverse of product to check whether it is palindrome or not 
            while (number != 0) { 
                reverse = reverse * 10 +  
                          number % 10; 
                number /= 10; 
            } 
  
            // Update new product if exist and if greater than previous one  
            if (product == reverse &&  product > max_product) 
                max_product = product; 
        } 
    } 
    return max_product; 
} 