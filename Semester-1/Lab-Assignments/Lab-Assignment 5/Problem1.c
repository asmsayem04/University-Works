/*1. Write a function Swap_Array() that takes two arrays from the keyboard and swaps the values of those arrays. Use
pointers as parameters in the function and print the swapped arrays in the main function.
Input:
Array 1: 5 1 2 3 6
Array 2: 3 7 1 9 0
Output:
Array 1: 3 7 1 9 0
Array 2: 5 1 2 3 6*/

#include <stdio.h>

void Swap_Array(int *arr1, int *arr2, int size) {
    for (int i = 0; i < size; i++) {
        int temp = *(arr1 + i);
        *(arr1 + i) = *(arr2 + i);
        *(arr2 + i) = temp;
    }
}

int main() {
    int size;
    printf("Enter the size of the arrays: ");
    scanf("%d", &size);

    int arr1[size], arr2[size];

    printf("Enter the elements of the first array: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the elements of the second array: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr2[i]);
    }

    Swap_Array(arr1, arr2, size);

    printf("Array 1: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\n");

    printf("Array 2: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");

    return 0;
}

/*
A.S.M Sayem
ID: 2024-3-60-615
*/