#include <stdio.h>

/*
We all know what factorial is. Factorial 
of 5 is 5! = 5 * 4 * 3 * 2 * 1 = 120
We can easily calculate small numbers' factorials, 
but using paper and pencil or calculator is hard when we work with bigger numbers.
Let's write a code that finds a factorial of given number with one for loop.
*/

int main(){
    int n, i;
    unsigned long long int factorial = 1;
    
    printf("Enter an integer and find its factorial: ");
    scanf("%d",&n);
    
    for(i=1; i<=n; ++i){
        factorial *= i; // equals to factorial = factorial*i;
        	printf("%d\n", factorial);
	}

    printf("%d factorial is %llu", n, factorial);

    return 0;
}
