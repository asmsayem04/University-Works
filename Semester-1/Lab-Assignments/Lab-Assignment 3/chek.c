/*
5. Write a function named is_prime() that takes an integer value as a parameter and
returns 1 if the integer is prime and 0 otherwise. Write another function named is_odd()
that will check if a value is odd. Use these functions to check if an integer is odd and
prime or just odd, and print accordingly.
Input:
15
Output:
Odd number.
Input:
13
Output:
Odd and prime number.
*/

#include <stdio.h>

int is_prime(int a)
{
    int i = 2;

    if (a <= 1)
        return 0;

    if (a == 2)
    {
        return 1;
    }

    while (i < a)
    {

        if (a % i == 0)
        {
            return 0;
            break;
        }

        i++;
    }

    return 1;
}
int is_Odd(int a)
{
    if (a % 2 != 0)
        return 1;

    else
        return 0;
}

int main()
{

    int a, prime_dicison, odd_dicison;
    printf("Enter The Number: ");
    scanf("%d", &a);

    prime_dicison = is_prime(a);
    odd_dicison = is_Odd(a);
    if (prime_dicison == 1 && odd_dicison == 1)
        printf("%d is Odd and Prime Number", a);

    else if (prime_dicison == 0 && odd_dicison == 1)
        printf("%d is Odd Number", a);

    else if (prime_dicison == 0 && odd_dicison == 0)
        printf("%d is Nither Odd nor Prime Number ", a);
}