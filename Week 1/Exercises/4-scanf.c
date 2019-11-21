#include <stdio.h>

/*
When a character is entered by the user in the last program, the character itself is not stored. 
Instead, an integer value (ASCII value) is stored.

And when we display that value using %c text format, the entered character is displayed. 
If we use %d to display the character, it's ASCII value is printed.

Use the same basic scanf printf format but this time, print the character with %d to see the ascii value. 
*/

int main() {
    char chr;
    printf("Enter a character: ");
    scanf("%c", &chr);     
    
	// when %c is used, a character is displayed
    printf("You entered %c.\n",chr);  
    
	// when %d is used, ASCII value is displayed
    printf("ASCII value is %d.\n", chr);  
	
	// Make lower case to upper case
    printf("Capitalized char is %c.\n", chr-32);
	printf("Capilalized ASCII value is %d.\n", chr-32);
	    
	//We can also use this ascii value difference to find capitalize value
	printf("Capitalized char with chars is %c.\n", chr -'a'+'A');
    return 0;
}

