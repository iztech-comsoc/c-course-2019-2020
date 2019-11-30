#include <stdio.h>

int factorial(int n) {
    
    printf("%d\n",n);
    return n * factorial(n-1);
    
}

int main() {
    int n = -1;

    printf("n: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("invalid input.");
        return 1;
    }

    int fact_n = factorial(n);

    printf("%d! = %d", n, fact_n);
}
