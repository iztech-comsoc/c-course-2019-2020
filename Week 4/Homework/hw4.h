#include <stdlib.h>
#include <stdio.h>

/*
    C strings are array whose last element is NUL ('\0'). 
    Code a function that takes char array as argument and returns length of string.
*/
int my_strlen(char string[]) {
    int len;
    for(len = 0; string[len] != '\0'; len++);

    return len;
}

/*
    Code a function that compares two string and returns "output" that satisfies conditions below:
        - output = 0 if str1 and str2 are equal
        - output > 0 if str1 is greater than str2
        - output < 0 if str1 is less than str2 
*/
int strsum(char str[]);
int my_strcmp(char str1[], char str2[]) {
    return strsum(str1)-strsum(str2);
}

int strsum(char str[]) {
    int result = 0;
    for(int i = 0; str[i] != '\0'; i++) {
        result += str[i];
    }

    return result;
}

/*
    Code a function that takes a string and 
        - returns integer value if its content is number, othwise
        - returns 0.

    Examples:
        my_atoi("1515") == 1515
        my_atoi("+1515") == 1515
        my_atoi("-1515") == -1515
        my_atoi("15as5a") == 0
        
*/
int my_atoi(char str[]) {
    int result = 0;
    int i = 0;

    if (str[i] == '-' || str[i] == '+') 
        i = 1;

    for (; str[i] != '\0'; i++) {
        if (str[i] < '0' || str[i] > '9') return 0;
        result = result * 10 + str[i] - '0';
    }

    if (str[0] == '-')
        result *= -1;

    return result;
}
/*
    Converts integer to string

    Example:
        char buffer[12];
        my_itoa(123456, buffer); // the value is written in buffer now.
*/
void my_itoa(int number, char buffer[]) {
    int n = number;
    int i = 0;

    if (n < 0) {
        n = -n;
    }

    do {
        buffer[i] = n % 10 + '0';
        i++;
    } while ((n /= 10) > 0);

    if (number < 0) {
        buffer[i] = '-';
        i++;
    }
    buffer[i] = '\0';

    int len = i-1;

    for(i = 0; i <= len/2; i++) {
        char temp = buffer[i];
        buffer[i] = buffer[len-i];
        buffer[len-i] = temp;
    }
}

/*
    Find the sum of numbers up to 4 digits delimeted by whitespace in the file fsum.txt.
*/
int fsum() {
    FILE *fp = fopen("fsum.txt", "r");

    if (!fp) {
        // printf("file could not be opened!");
        return -1;
    }

    int c;
    char chunk[5];
    int number;
    int index = 0;
    int sum = 0;

    while ((c = fgetc(fp)) != EOF) {
        if (c == ' ') {
            number = atoi(chunk);
            sum += number;

            for (int i = 0; i < 5; i++) {
                chunk[i] = '\0';
            }
            index = 0;
        } else {
            chunk[index] = c;

            index++;
        }
    }

    number = atoi(chunk);
    sum += number;

    if (ferror(fp)) {
        // printf("something happened while reading");
        sum = -2;
    }

    fclose(fp);
    
    return sum;
}