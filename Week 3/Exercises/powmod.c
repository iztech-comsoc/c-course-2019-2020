#include <stdio.h>

/*
    Power function become slower, even worse can lead to memory problems, when we are working with big numbers.
    If we need to only modulo of result, we have a better way to calculate result.

    To illustrate how we perform the operation, let us look the example below:
        2^5 mod 5 = ?

        2 mod 5 = 2
        2*2 mod 5 = 4
        4*2 mod 5 = 3
        3*2 mod 5 = 1
        1*2 mod 5 = 2

        As we see, the result is same.

    Code the given function prototype below:
        int pow_mod(int x, int y, int z); 
            returns x^y mod z
*/

int pow_mod(int x, int y, int z);

int main() {
    printf("%d", pow_mod(5,2,3));
}

int pow_mod(int x, int y, int z) {
    int result = 1;

    for(int i = 0; i < y; i++) {
        result = (result * x) % z;
    }

    return result;
}