#include <stdio.h>

void main() {
    for (int i = 0; i < 10; ++i) {
        printf("%d ", i);
    }

    printf("\n");

    int i = 1;
    while (i < 10) {
        printf("%d ", i);
        i++;
    }
    
    printf("\n");

    i = 1;
    do {
        printf("%d ", i);
        i++;
    } while (i < 10);
}
