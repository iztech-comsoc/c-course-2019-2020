#include <stdio.h>

/*
We can use loops for various ways. 
Lets think we have an integer number and we want to find its decimal places, in other words how many digits does it consist of?.
For example we can make a loop which removes a number's digits one by one and count until the number has no digits.
Find a way to find a decimal places.
*/

int main()
{
    long long n;
    int count = 0;

    printf("Enter an integer: ");
    scanf("%lld", &n);

    while (n != 0) {
        n /= 10;
        ++count;
    }

    printf("Number of digits: %d", count);
}
