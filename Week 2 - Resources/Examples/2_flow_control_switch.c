#include <stdio.h>

int main() {
    int age;

    printf("age: ");
    scanf("%d", &age);

    switch (age) {
        case 1:
            printf("You're one.\n");
            break;
        case 2:
            printf("You're two.\n");
            break;
        case 3:
            printf("You're three.\n");
        case 4:
            printf("You're three or four.\n");
            break;
        default:
            printf("You're not 1,2,3 or 4!\n");
    }
}