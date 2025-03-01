/*4. Write a function named factorial() that takes an integer value as a parameter and
returns the factorial of that value. Use this function to calculate and print the factorials of
integers from 1 to 10.*/

#include <stdio.h>

int factorial(int given_number)
{

    int i, ans_fact = 1;

    for (i = given_number; i > 0; i--)
    {
        ans_fact *= i;
    }

    return ans_fact;
}

int main()
{

    int i;

    for (i = 1; i < 11; i++)
    {
        int fact = factorial(i);

        printf("Factorial of %d is %d\n", i, fact);
    }
}


/*
A S M Sayem
ID: 2024-3-60-615
*/