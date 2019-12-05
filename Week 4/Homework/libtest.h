/*
    Copyright (C) 2019 Gökberk AKDENİZ
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int passed;
    int failed;
} IzTest;

void iztest_init(IzTest* t, char name[]) {
    t->passed = 0;
    t->failed = 0;

    int len = strlen(name);
    for(int i = 0; i < (65-len)/2; i++) putchar('=');
    printf(" %s test ", name);
    for(int i = 0; i < (66-len)/2; i++) putchar('=');
    putchar('\n');
}

IzTest* iztest_new(char name[]) {
    IzTest* tptr = (IzTest*) malloc(sizeof(IzTest));
    iztest_init(tptr, name);

    return tptr;
}

void iztest_print_results(IzTest* t) {
    int total = t->passed + t->failed;
    printf("\n-> %d of %d %s passed.\n\n", t->passed, total, total == 1 ? "test is" : "tests are");
}

void iztest_eq(IzTest* t, char test_name[], int found, int expected) {
    if (found == expected) {
        printf("%d. [PASSED] %s\n", t->passed + t->failed + 1, test_name);
        t->passed += 1;
    } else {
        printf("%d. [FAILED] %s (%d != %d)\n", t->passed + t->failed + 1, test_name, found, expected);
        t->failed += 1;
    }
}

void iztest_eq_str(IzTest* t, char test_name[], char found[], char expected[]) {
    if (strcmp(found, expected) == 0) {
        printf("%d. [PASSED] %s\n", t->passed + t->failed + 1, test_name);
        t->passed += 1;
    } else {
        printf("%d. [FAILED] %s ('%s' != '%s')\n", t->passed + t->failed + 1, test_name, found, expected);
        t->failed += 1;
    }
}

void iztest_ok(IzTest* t, char test_name[], int expression) {
    if (expression) {
        printf("%d. [PASSED] %s\n", t->passed + t->failed + 1, test_name);
        t->passed += 1;
    } else {
        printf("%d. [FAILED] %s\n", t->passed + t->failed + 1, test_name);
        t->failed += 1;
    }
}

void iztest_comp(IzTest* t, char test_name[], int n1, int n2, int (*comp)(int, int)) {
    if (comp(n1, n2)) {
        printf("%d. [PASSED] %s\n", t->passed + t->failed + 1, test_name);
        t->passed += 1;
    } else {
        printf("%d. [FAILED] %s\n", t->passed + t->failed + 1, test_name);
        t->failed += 1;
    }
}

int eq(int n1, int n2) {
    return n1 == n2;
}

int gt(int n1, int n2) {
    return n1 > n2;
}

int gte(int n1, int n2) {
    return n1 >= n2;
}

int lt(int n1, int n2) {
    return n1 < n2;
}

int lte(int n1, int n2) {
    return n1 <= n2;
}