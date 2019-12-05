#include <stdio.h>
#include <string.h>

int main() {
    char word1[] = "word one ";
    char word2[] = "word two";
    char word3[100];

    printf("word1='%s'\n", word1);
    printf("word2='%s'\n", word2);

    strcpy(word3, word1);
    printf("word3='%s'\n", word3);

    strcat(word3, word2);
    printf("word3='%s'\n", word3);

    printf("word3 length='%d'\n", strlen(word3));

}