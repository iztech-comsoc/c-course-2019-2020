#include <stdio.h>
#include <string.h>

int main() {
    char name[100], surname[100];
    int op;

    printf("1. Add\n");
    printf("2. List\n");
    printf("$ ");

    scanf("%d", &op);

    if (op == 1) {
        printf("Name Surname: ");
        scanf("%s %s", &name, &surname);

        FILE* f = fopen("names.txt", "a");

        if (!f) {
            printf("file could not be opened!");
            return 1;
        }

        fwrite(name, sizeof(char), sizeof(char) * strlen(name), f);
        fputc(' ', f);
        fwrite(surname, sizeof(char), sizeof(char) * strlen(surname), f);
        fputc('\n', f);

        if (ferror(f)) {
            printf("something happened while writing");
        }

        fclose(f);
    } else if (op == 2) {
        FILE* f = fopen("names.txt", "r");

        if (!f) {
            printf("file could not be opened!");
            return 1;
        }

        char c;
        while((c = fgetc(f)) != EOF) {
            putchar(c);
        }

        if (ferror(f)) {
            printf("something happened while writing");
        }

        fclose(f);
    } else {
        printf("invalid input");
    }
}

