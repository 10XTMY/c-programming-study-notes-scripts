//
// Created by Tommy on 10/02/2024.
//

#include <stdio.h>
#include <loops.h>

void ding(void) {
    printf("ding\n");
}

void dong(void) {
    printf("dong\n");
}

void woof(void) {
    printf("woof\n");
}

void demo_loops(void) {

    printf("for loop..\n");
    for (int i = 0; i < 3; i++) {
        woof();
    }

    printf("while loop..\n");
    int i = 3;
    while (i > 0) {
        ding();
        dong();
        i--;
    }

    // do while loop
    // the do while loop is similar to the while loop,
    // but the condition is checked after the loop body
    // ensuring that the loop body is executed at least once
    printf("do while loop..\n");
    int j = 0;
    do {
        woof();
        j++;
    } while (j < 3);
}