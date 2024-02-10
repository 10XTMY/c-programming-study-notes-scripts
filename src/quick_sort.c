//
// Created by Tommy on 10/02/2024.
//
// Key Points of Quick Sort
// - Pivot Selection: The choice of pivot affects the performance.
//   This simple implementation always picks the last element as the pivot, but other strategies,
//   such as picking the median or a random element, can help avoid the worst-case scenario.
//
// - Partitioning: The array is rearranged so that elements less than the pivot are on the left,
//   elements greater than the pivot are on the right, and the pivot is placed in its correct sorted position.
//
// - Recursion: Applied recursively to the sub-arrays formed by partitioning.
//
// - Performance: Generally faster than Merge Sort and Heap Sort.
//   QuickSort is not suitable for large datasets, as its average and worst-case time complexity is O(n^2).
//   While QuickSort has an average-case time complexity of O(nlogn), its performance can degrade to O(n2).
//   With good pivot selection strategies, its average performance is often better than other
//   O(nlogn) sorting algorithms, especially for arrays that don't fit into memory (external sorting).

#include <stdio.h>
#include <merge_sort.h> // printf_array

// Function to swap two elements
void swap(int* a, int* b) {
    int t = *a;
    *a = *b;
    *b = t;
}

// This function takes last element as pivot, places
// the pivot element at its correct position in sorted
// array, and places all smaller (smaller than pivot)
// to left of pivot and all greater elements to right
// of pivot
int partition(int arr[], int low, int high) {
    int pivot = arr[high]; // pivot
    int i = (low - 1); // Index of smaller element

    for (int j = low; j <= high - 1; j++) {
        // If current element is smaller than the pivot
        if (arr[j] < pivot) {
            i++; // increment index of smaller element
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

// The main function that implements QuickSort
// arr[] --> Array to be sorted,
// low  --> Starting index,
// high  --> Ending index
void quick_sort(int arr[], int low, int high) {
    if (low < high) {
        // pi is partitioning index, arr[p] is now
        // at right place
        int pi = partition(arr, low, high);

        // Separately sort elements before
        // partition and after partition
        quick_sort(arr, low, pi - 1);
        quick_sort(arr, pi + 1, high);
    }
}

// Driver program to test above functions
int run_quick_sort() {
    int arr[] = {10, 7, 8, 9, 1, 5};
    printf("\nGiven array: \n");
    int n = sizeof(arr) / sizeof(arr[0]);
    quick_sort(arr, 0, n - 1);
    printf("\nSorted array: \n");
    print_array(arr, n);
    return 0;
}
