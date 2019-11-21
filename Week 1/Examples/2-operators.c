#include <stdio.h>

int main() {
    int x = 2;
    printf("x=%d\n", x);

    int y = ++x + 3;
    printf("x=%d\ty=%d\n", x, y);

    x = y-- * ++x;
    printf("x=%d\ty=%d\n", x, y);

    x /= 3;
    printf("x=%d\ty=%d\n", x, y);
    
    double z1 = x / 5;
    double z2 = x / 5.0;
    double z3 = (double) x / 5;
    int z4 = (double) x / 5;
    printf("x=%d\ty=%d\tz1=%f\tz2=%f\tz3=%f\tz4=%d\n", x, y, z1, z2, z3, z4);

    return 0;
}