#include <stdio.h>

/*
Every variable has a size in memory
Sizeof operator is used to evaluate the size of a variable
Example use:
int something_integer;
printf("Size of int: %ld bytes\n", sizeof(something_integer));    

output:
Size of int: 4 bytes

Use sizeof function and find the sizes of int, float, double and char variables.
*/

int main(){
    int integer_type;
    float float_type;
    double double_type;
    char char_type;
    
    printf("Size of int: %ld bytes\n", sizeof(integer_type));
    printf("Size of float: %ld bytes\n", sizeof(float_type));
    printf("Size of double: %ld bytes\n", sizeof(double_type));
    printf("Size of char: %ld byte\n", sizeof(char_type));
    printf("Size of pi: %ld byte\n", sizeof(3.14));
    printf("Size of size of return value: %ld byte\n", sizeof(sizeof(integer_type)));
    return 0;
}
