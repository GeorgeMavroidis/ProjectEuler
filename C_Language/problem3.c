#include<math.h>
#include<stdio.h>

int main(void) {
  unsigned long i, j, k, prime_factor = 0, val = 600851475143u; // initialize variables to 0

    /* 
  	 Logic: 600851475143 is likely outside range of `int`,  better to treat it as an `unsigned long long`
  	 no need to try values > sqrt(600851475143)
	*/

  unsigned long maximum = (unsigned long) ceil(sqrtl(val)); // Calculate square root

  for (i = 1; i <= maximum; i++) {
    if (val % i == 0) { //Check if value is factor or not
      k = 0;
      for (j = 1; j <= i; j++) { // Check if the factor is prime
        if (i % j == 0) { 
          k++; // Factor is prime
        }
      }

      if (k == 2) {
        prime_factor = i;
      }
    }
  }

  printf("\nThe largest prime factor of %lu is: %lu\n", val, prime_factor);

  return 0;
}