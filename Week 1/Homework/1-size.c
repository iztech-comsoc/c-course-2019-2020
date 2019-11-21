#include <stdio.h> 
  
int main(int argc, char** argv) 
{ 
    char c;

    printf("char: ");
    scanf("%c", &c);
    
    printf("%c is char and it takes up %d byte(s).\n", c, sizeof(char));
    printf("%d is int and it takes up %d byte(s).\n", (int) c, sizeof(int));
    printf("%.f is float and it takes up %d byte(s).\n", (float) c, sizeof(float));
    printf("%.f is double and it takes up %d byte(s).\n", (double) c, sizeof(double));
} 
