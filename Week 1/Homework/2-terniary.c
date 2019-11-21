#include<stdio.h>

// There is an operator called terniary that everyone forgets. :(
// Lets use terniary operator to find which number is bigger without using if keyword.
// Terniary operator is closely related to if-else-else if statement.
// (condition) ? expression1 : expression2    If the condition is true then expression1 is returned, otherwise expression2 is returned.
// Take two numbers, use terniary operator, store the biggest one and print it.

int main(){
	
	int a=10,b=8;
	int c=4;

	c = (0>100) ? a: b;
	
	printf("a=%d  b=%d  c=%d",a,b,c);
	return 0;
}
