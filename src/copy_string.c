//
// Created by Tommy on 10/02/2024.
//
#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

void copy_string() {
    // get a string from the user
    char *s = get_string("\ns: ");
    if (!s) {
        return;
    }
    // allocate memory for another string
    char *t = malloc(strlen(s) + 1); // +1 for the null terminator
    if (!t) {
        // free memory
        free(t);
        return;
    }

    // strcpy(t, s); // copy string into memory

    // copy string into memory
    for (int i = 0, n = strlen(s); i < n; i++) { // n is the length of the string
        t[i] = s[i]; // copy the ith character of s into the ith character of t
    }
    t[strlen(s)] = '\0'; // add the null terminator

    if (strlen(t) > 0) {
        t[0] = toupper(t[0]); // capitalize the first letter of t
    }
    // we can eliminate above line of code by using i <= n in the for loop^^
    printf("s: %s\n", s);
    printf("t: %s\n", t);

    // free memory
    free(t);
    // we don't need to free s because it is a string literal
    // and is stored in the code segment of the memory
}