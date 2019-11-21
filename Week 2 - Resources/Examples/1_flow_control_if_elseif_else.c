#include <stdio.h>

int main() {
    int a, b;

    printf("a b: ");
    scanf("%d %d", &a, &b);

    if (a > b) {
        printf("%d is greater than %d.", a, b);
    } else if (a < b) {
        printf("%d is less than %d.", a, b);
    } else {
        printf("%d and %d are equal.", a, b);
    }
}