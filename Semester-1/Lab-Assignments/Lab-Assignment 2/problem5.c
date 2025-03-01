/*

Write a program that takes an odd number N as input from keyboard and finds the
value of the following series:
(3/2) 2 + (5/2) 2 + (7/2) 2 + … +(N/2) 2
Sample Input:
Enter a number: 5
Output: 8.5

*/

#include <stdio.h>
int main()
{

    int i, a;
    float sum = 0;

    printf("Enter the nth Number for the Seris: ");
    scanf("%d", &a);

    if (a % 2 == 0)
    {
        printf("You hae entered even number. Please Enter Odd Number");

        return 1;

    }

        for (i = 3; i <= a; i += 2)
        {
            sum += ((i / 2.00) * (i / 2.00));
        }

        printf("The Sum of the Seris: %f", sum);

        return 0;
    }

    /*
    A S M SAYEM
    ID: 2024-3-60-615
    */