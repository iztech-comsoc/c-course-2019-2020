#include <stdio.h>
/*
The Fibonacci sequence is a series where the next term is the sum of pervious two terms. 
The first two terms of the Fibonacci sequence is 0 followed by 1.
The Fibonacci sequence: 0, 1, 1, 2, 3, 5, 8, 13, 21

We can make this program with a single loop. Just say firstNumber = 0 and secondNumber = 1. 
The only thing the program need to do is just sum this two and print. And in next step program should sum previous sum and secondNumber and so on. 

Take a number N from user and print N fibonacci number.
Example output:
 Enter the number of terms: 4
 Fibonacci Series: 0, 1, 1, 2,
*/





int main(){
    int i, n, t1 = 1, t2 = 1, next_number;
    
	printf("Enter the number of terms: ");
    scanf("%d", &n);
    
	for (i = 1; i <= n; ++i){
		printf("%d ", t1);
		next_number = t1 + t2;
		t1 = t2;
		t2 = next_number;
    }
    
    return 0;
}
