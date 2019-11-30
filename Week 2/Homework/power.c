#include <stdio.h>

/*
Calculating power is one of the base operations in mathematics.
We can calculate a power operation with a single loop, with multiply the number exponent times.
For example 2^4 = (2 * 2 * 2 *2 ) is just multiplying 2, 4 times. 
Make a program that calculates the given power of given base number.
*/

int main(){
    int base, exponent;
    int result = 1;
    
	printf("Enter a base number: ");
    scanf("%d", &base);
    printf("Enter an exponent: ");
    scanf("%d", &exponent);
    printf("%d ^ %d = ", base, exponent);
    
	while (exponent != 0){
        result *= base;  // just multiply exponent times (base * base * ... * base * base )
        --exponent;
    }
    printf("%d", result);

    return 0;
}
