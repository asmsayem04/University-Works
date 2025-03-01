/*2. Write a function ArraySum() that takes three arrays from the keyboard , sums the values of the first and second arrays
position-wise, and stores the resulting values in the corresponding positions of the third array. Use
pointers as parameters in the function and print the third array in the main function.
Input:
Array 1: 5 1 2 3 6
Array 2: 2 7 1 9 0
Output:
Array 3: 7 8 3 12 6*/


#include <stdio.h>

void ArraySum(int *arr1, int *arr2, int *arr3, int size) {
    for (int i = 0; i < size; i++) {
        *(arr3 + i) = *(arr1 + i) + *(arr2 + i);
    }
}

int main() {
    int size;
    printf("Enter the size of the arrays: ");
    scanf("%d", &size);

    int arr1[size], arr2[size], arr3[size];

    printf("Enter the elements of the first array: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the elements of the second array: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr2[i]);
    }

    ArraySum(arr1, arr2, arr3, size);

    printf("Array 3: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr3[i]);
    }
    printf("\n");

    return 0;
}

/*
A.S.M Sayem
ID: 2024-3-60-615
*/