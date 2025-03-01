/* 
Problem 2: 

Write a program to print the ASCII values and their corresponding characters for all alphabetic
characters (both uppercase and lowercase letters). Do this using a for loop.

*/


#include <stdio.h>

int main() {
    char a;

    printf("ASCII values and their corresponding characters:\n");
    printf("---------------------------");
    printf("\nASCII values for uppercase letters:\n");
    printf("\n");

    for (a = 'A'; a <= 'Z'; a++) {
        printf("Character: %c, ASCII value: %d\n", a, a);
    }
    printf("\nASCII values for uppercase letters:\n");
    printf("\n");

    for (a = 'a'; a <= 'z'; a++) {
        printf("Character: %c, ASCII value: %d\n", a, a);
    }

    return 0;
}


/*
A S M SAYEM
ID: 2024-3-60-615
*/