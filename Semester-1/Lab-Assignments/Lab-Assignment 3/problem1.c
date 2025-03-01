/*1. Write a program that repeatedly takes a single digit as input from keyboard,
concatenates it to the previous number, and shows the number with all the concatenated
digits. When a digit lower than 0 is entered, the program exits with the message
“Program is ended”.
Hint: Use the digit concatenation method of the solution of while loop problem 8
(Palindrome number).
Input:
5
Output: 5
6
Output: 56
2
Output: 562
5
Output: 565
-1
Output: Program is ended.*/

#include <stdio.h>

int main()
{
    int given_number, concated_number = 0;

    do
    {
        printf("Enter any Number: ");
        scanf("%d", &given_number);

        if (given_number < 0)
        {
            printf("Program is Ended ");
            break;
        }

        concated_number = concated_number * 10 + given_number;

        printf("%d\n", concated_number);

    } while (1);
}


/*
A S M Sayem
ID: 2024-3-60-615
*/