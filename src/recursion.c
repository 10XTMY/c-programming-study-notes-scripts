//
// Created by Tommy on 10/02/2024.
//
#include <stdio.h>
#include <recursion.h>


void draw(int n) {
    // If nothing to draw
    if (n <= 0)
    {
        return;
    }

    // Draw n-1 hashes
    draw(n - 1);

    // Print one more row
    for (int i = 0; i < n; i++)
    {
        printf("#");
    }
    printf("\n");
}
