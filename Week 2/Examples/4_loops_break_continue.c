#include <stdio.h>
#include <math.h>

int main() {
    int n;
    printf("N=");
    scanf("%d", &n);
    
    // prints odd numbers which are less than N
    /*for(int number = 0; number < n; number++) {
        if (number % 2 == 0) continue;

        printf("%d ", number);        
    }*/

    // checks if N prime or not prime
    int is_prime = 1;
    for (int divisor = 2; divisor <= sqrt(n); divisor++) {
        if (n % divisor == 0) {
            is_prime = 0;
            break;
        }
        printf("%d\n", divisor);
    }
    
    printf("\n%d is %s", n, is_prime ? "prime" : "not prime");
}
