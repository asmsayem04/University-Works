/*6. Write a function named digitSum() that takes a positive integer as a parameter and
returns the sum of the digits of that integer. Write the main() function so that it takes an
integer from keyboard, calls digitSum() function, and shows the return value.
Input:
8832
Output:
21
Input:
5505
Output:
15*/

#include <stdio.h>

int digitSum(int a)
{
    int stored_digits, sum_of_digit = 0, copy_of_a = a;

    do
    {
        stored_digits = copy_of_a % 10;

        sum_of_digit = sum_of_digit + stored_digits;

        copy_of_a = copy_of_a / 10;

    } while (copy_of_a != 0);

    return sum_of_digit;
}

int main()
{
    int a, countingdigits;
    printf("Enter The Number to Count the Digits:  ");
    scanf("%d", &a);

    countingdigits = digitSum(a);
    printf("The Some of the Digits: %d", countingdigits);
}


/*
A S M Sayem
ID: 2024-3-60-615
*/
