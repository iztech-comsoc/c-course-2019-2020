#include <stdio.h>
/*
Lets make a good example with working a number in a different way.
An palindrome number is a number that the reverse of that number is equal to the original number.
So we need to reverse a number and check if it is equal to its reverse.
We can make it with a loop, and every step of loop, we can take the last digit of original number and add it to reversed numbers last digit.
Hint:
	we can use "remainder = n%10;" expression for take the last digit 
	not hint for how to add it to reversed number :)
*/
int main(){
    int n, reversed = 0, remainder, original;
    
	printf("Enter an integer: ");
    scanf("%d", &n);
    // we make zero from n, so we need original value in another variable
    original = n;
    // reversed integer is stored in variable
    while( n!=0 ){
        remainder = n%10;            // take the last number 
        reversed = reversed*10 + remainder; // and make it reversed number's most right digit
        n /= 10;
    }
    // palindrome if orignal and reversed are equal
    if (original == reversed)
        printf("%d is a palindrome.", original);
    else
        printf("%d is not a palindrome.", original);
    
    return 0;
}

