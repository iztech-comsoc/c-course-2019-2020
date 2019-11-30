#include <stdio.h>

/*
    Code a recursive function that returns nth term of fibonacci sequence.
*/

int fib(int n) {
    if (n < 0)
        return -1;
    else if (n == 0)
        return 0;
    else if (n < 3)
        return 1;
     
    return fib(n-1) + fib(n-2);
    
}

int main() {
    int n = -1;

    printf("n: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("invalid input.");
        return 1;
    }

    int fib_n = fib(n);

    printf("fib(%d) = %d", n, fib_n);
}