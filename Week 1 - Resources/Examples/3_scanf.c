#include <stdio.h>

int main() {
    char c;
    int n;

    printf("n: ");
    scanf("%d", &n);

    printf("c: ");
    scanf(" %c", &c);

    printf("n=%d, c=%c", n, c);
}