/*
Write a program that takes a number to calculate its factorial and sums up all the even numbers
between the input number and its factorial. Do this using for loops.
Sample Input:
Enter a number: 4
Output:
The factorial of 4 is: 24
The sum of even numbers between 4 and 24 is: 154

*/

#include <stdio.h>
int main()
{

    double a, factorial = 1;
    int i, j;
    int sum = 0;
    printf("Enter the Number you want to Factorial: ");
    scanf("%lf", &a);

    if (a < 0)
    {
        printf("Input Positive Numbers Only\n");
        return 0;
    }

    for (i = a; i >= 1; i--)
    {
        factorial = factorial * i;
    }

    for (j = a; j <= factorial; j++)
    {
        if (j % 2 == 0)
            sum = sum + j;
    }

    printf("The Factorial is: %lf\nThe sum Of even number between input and factorial is: %d", factorial, sum);
    return 0;
}

/*
A S M SAYEM
ID: 2024-3-60-615
*/