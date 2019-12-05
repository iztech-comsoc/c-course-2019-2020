#include <stdio.h>

/*
    Makes given string lowercase
*/
void my_strlwr(char* text) {
    for (int i = 0; i < strlen(text); i++) {
        if (text[i] >= 'A' && text[i] <= 'Z') {
            text[i] += 32; // 'a' - 'A' = ' ' = 32
        }
    }
}

/*
    Makes given string uppercase
*/
void my_strupr(char* text) {
    for (int i = 0; i < strlen(text); i++) {
        if (text[i] >= 'a' && text[i] <= 'z') {
            text[i] -= 32; // 'a' - 'A' = ' ' = 32
        }
    }
}

/*
    Returns index of first occurence of "cs" in "readme.txt",
    Returns -1 if not found.
*/
int index_of_char(char cs) {
    FILE* f = fopen("readme.txt", "r");

    if (!f) {
        // printf("file could not be opened!");
        return -2;
    }

    char c;
    int index = -1;
    int found = 0;
    while((c = fgetc(f)) != EOF) {
        index += 1;
        if (c == cs) {
            found = 1;
            break;
        }
    }

    if (ferror(f)) {
        // printf("something happened while writing");
        fclose(f);
        return -3;
    }

    fclose(f);
    return found ? index : -1;
}