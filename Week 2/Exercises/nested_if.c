#include <stdio.h>

/*
Let's try the last example without -else if-
We know that if and else blocks can have another if-else statement, we call it nested if statement.
So, use nested if to make same program.
*/

int main() {
    int a, b;

    printf("a b: ");
    scanf("%d %d", &a, &b);

    if (a > b) {
        printf("%d is greater than %d.", a, b);
    } else {
    	if (a < b) {
        	printf("%d is less than %d.", a, b);
    	} else {
        	printf("%d and %d are equal.", a, b);
    	}		
    }
	
    return 0;
}
