/*3. Write a program that takes two integer numbers as input and displays all the numbers
between them, excluding numbers divisible by 7, 11, or 13. Stop displaying numbers if a
number is divisible by 17. Provide the code using continue and break statements.
Input:
1
100
Output:
1 2 3 4 5 6 8 9 10 12 15 16 17
Input:
25
100
Output:
25 27 29 30 31 32 34*/

#include <stdio.h>

int main()
{
    int a, b, i;
    printf("Enter the Staring Range ");
    scanf("%d", &a);
    printf("Enter the Ending Range  ");
    scanf("%d", &b);

    if (a > b)
    {
        int temprary = a;
        a = b;
        b = temprary;
    }

    for (i = a; i <= b; i++)
    {
        if (i % 7 == 0 || i % 11 == 0 || i % 13 == 0)
        {
            continue;
        }
        printf("%d ", i);

        if (i % 17 == 0)
            break;
    }
}


/*
A S M Sayem
ID: 2024-3-60-615
*/