/*
Problem 1 :

Write a program that takes two numbers as user input and calculates the sum of the numbers
divisible by 5, 7, and 13 individually between those two input numbers. Do this using a while loop.
Sample Input:
10 50
Output:
Sum of numbers divisible by 5: 270
Sum of numbers divisible by 7: 189
Sum of numbers divisible by 13: 78

*/

#include <stdio.h>

int main()
{
    int a, b;
    int sumofdivby5 = 0, sumofdivby7 = 0, sumofdivby13 = 0;
    int i;

    printf("Enter the 1st number: ");
    scanf("%d", &a);
    printf("Enter the 2nd number: ");
    scanf("%d", &b);

    if (a < b) {
        i = a;
        while (i <= b) {
            if (i % 5 == 0) {
                sumofdivby5 += i;
            }
            if (i % 7 == 0) {
                sumofdivby7 += i;
            }
            if (i % 13 == 0) {
                sumofdivby13 += i;
            }
            i++;
        }
    } 
    else if (a > b) {
        i = b;
        while (i <= a) {
            if (i % 5 == 0) {
                sumofdivby5 += i;
            }
            if (i % 7 == 0) {
                sumofdivby7 += i;
            }
            if (i % 13 == 0) {
                sumofdivby13 += i;
            }
            i++;
        }
    }

    printf("Sum of numbers divisible by 5: %d\n", sumofdivby5);
    printf("Sum of numbers divisible by 7: %d\n", sumofdivby7);
    printf("Sum of numbers divisible by 13: %d\n", sumofdivby13);

    return 0;
}

/*
A S M SAYEM
ID: 2024-3-60-615
*/