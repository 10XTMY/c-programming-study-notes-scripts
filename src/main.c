#include <stdio.h>
#include <cs50.h>
#include <loops.h>
#include <recursion.h>
#include <merge_sort.h>
#include <quick_sort.h>
#include <copy_string.h>

int main() {
    string answer = get_string("What's your name? \n");
    // %s is a placeholder for a string, %i for an integer,
    // %f for a float, %p for a pointer, etc
    printf("hello, %s\n", answer);

    printf("\nloops demo..");
    demo_loops();

    printf("\nrecursion demo..\n");
    int height = get_int("Height: \n");
    draw(height);

    printf("\nmerge sort demo..");
    run_merge_sort();

    printf("\nquick sort demo..");
    run_quick_sort();

    printf("\ncopy string demo..");
    copy_string();
    return 0;
}
