/*3. Write a function called MaxMinArray() that takes an array and two variables as parameters to
store memory addresses, and prints the maximum and minimum number from the array. The main
function will print the addresses of the maximum and minimum values in the array. Use pointers as
parameters in the function.*/

#include <stdio.h>

void MaxMinArray(int *arr, int size, int **max, int **min) {
    *max = arr;
    *min = arr;

    for (int i = 0; i < size; i++) {
        if (*(arr + i) > **max) {
            *max = arr + i;
        }
        if (*(arr + i) < **min) {
            *min = arr + i;
        }
    }
}

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter the elements of the array: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int *max, *min;
    MaxMinArray(arr, size, &max, &min);

    printf("Mximum value: %d Address of the: %u\n", *max,max);
    printf("Minimum value: %d Address of the Minimum: %u\n", *min,min);

    return 0;
}

/*
A.S.M Sayem
ID: 2024-3-60-615
*/


