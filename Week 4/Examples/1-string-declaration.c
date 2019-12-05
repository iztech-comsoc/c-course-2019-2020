#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "Hello";
    char str2[3] = {',', ' ', '\0'};
    char str3[] = {'W', 'o', 'r', 'l', 'd', '!', '\0'};
    printf("%s%s%s", str1, str2, str3);
}

