//
// Created by Tommy on 10/02/2024.
//
// Key Points of Merge Sort
// - Divide and Conquer: Merge Sort divides the input array into two halves, recursively sorts the two halves,
//   and finally merges the sorted halves into a single sorted array.
//
// - Time Complexity: The time complexity of merge sort is O(nlogn) in all cases (best, average, and worst,
//   making it highly predictable and reliable for sorting operations.
//
// - Space Complexity: The space complexity of merge sort is O(n) because an auxiliary array of the same size as the
//   input array is used for sorting. This is its main disadvantage, especially in environments where memory is limited.
//
// - Not In Place: Unlike some other sorting algorithms (e.g., quick sort), merge sort is not an in-place sorting
//   algorithm because it requires additional temporary array(s) for merging.
//
// - Recursion: The algorithm uses recursion for dividing the array into halves and sorting them.
//   The depth of the recursion tree is O(logn), contributing to its logarithmic time complexity.
//
// - Stability: Merge Sort is stable, meaning that the original order of equal elements is preserved in the sorted
//   output. This is important when it is necessary to sort by multiple criteria.
//
// - Performance: Merge Sort is well-suited for linked lists and external sorting applications, where data that
//   doesn't fit into memory needs to be sorted, such as with large files on disk. Its divide and conquer approach
//   can efficiently manage sorting in chunks that fit into RAM.

#include <stdio.h>

void merge(int arr[], int l, int m, int r) {
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;

    // Create temp arrays
    int L[n1], R[n2];

    // Copy data to temp arrays L[] and R[]
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    // Merge the temp arrays back into arr[l..r]
    i = 0; // Initial index of first subarray
    j = 0; // Initial index of second subarray
    k = l; // Initial index of merged subarray
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // Copy the remaining elements of L[], if there are any
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    // Copy the remaining elements of R[], if there are any
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void merge_sort(int arr[], int l, int r) {
    if (l < r) {
        // Same as (l+r)/2, but avoids overflow for large l and h
        int m = l + (r - l) / 2;

        // Sort first and second halves
        merge_sort(arr, l, m);
        merge_sort(arr, m + 1, r);

        merge(arr, l, m, r);
    }
}

// Utility function to print an array
void print_array(int A[], int size) {
    for (int i = 0; i < size; i++)
        printf("%d ", A[i]);
    printf("\n");
}

// Driver program to test above functions
void run_merge_sort(void) {
    int arr[] = {12, 11, 13, 5, 6, 7};
    int arr_size = sizeof(arr) / sizeof(arr[0]);

    printf("\nGiven array is \n");
    print_array(arr, arr_size);

    merge_sort(arr, 0, arr_size - 1);

    printf("\nSorted array is \n");
    print_array(arr, arr_size);
}
