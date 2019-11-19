#include <stdio.h>

int main(){
   
	int edge = 4000000; // Bar is four million
	int fibonacci = 1, last_fibonacci = fibonacci; // Create holding variables for fibonacci numbers
	int result = 0; //Create store variable for result

	while(last_fibonacci <= edge){

		if(fibonacci % 2 == 0){
			result += fibonacci;
		}

		int temp_fibonacci = last_fibonacci;

		last_fibonacci = fibonacci;
		fibonacci = fibonacci + temp_fibonacci;

	}
	printf("Result: %d\n",result );


	return 0;
}