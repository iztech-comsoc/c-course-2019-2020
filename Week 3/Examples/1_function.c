#include <stdio.h>
#include <math.h>

int main() {
    int n = -1;

    printf("n: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("invalid input.");
        return 1;
    }


    printf("%d is %s.", n, is_prime(n) ? "prime" : "not prime");
}

int is_prime(int n) {
    for (int divisor = 2; divisor <= sqrt(n); divisor++) {
        if (n % divisor == 0) return 0;
    }

    return 1;
}
