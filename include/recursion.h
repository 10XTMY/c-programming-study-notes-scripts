//
// Created by Tommy on 10/02/2024.
//

#ifndef PRACTICE_RECURSION_H
#define PRACTICE_RECURSION_H

void draw(int n);

/**
 * Prompts user for a line of text from standard input and returns the
 * equivalent int; if text does not represent an int in [-2^31, 2^31 - 1)
 * or would cause underflow or overflow, user is prompted to retry. If line
 * can't be read, returns INT_MAX.
 */
int get_int(const char *format, ...) __attribute__((format(printf, 1, 2)));

#endif //PRACTICE_RECURSION_H
