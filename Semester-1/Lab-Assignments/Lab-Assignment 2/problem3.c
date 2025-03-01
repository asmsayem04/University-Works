/*

Write a program that takes four float numbers (a, b, c, d) as input and calculates the result of the
following expression: (a b /c) d . Do this without using math.h function. Write the code using while
loops.

Sample Input:
Enter the value of a: 2
Enter the value of b: 3
Enter the value of c: 4
Enter the value of d: 2

Output  : 4
*/

#include <stdio.h>
int main ()
{

    float a,b,c,d;
    float sum1=1, sum2=1, sum3=1, ans;
    int i = 1, j =1;


    printf("Enter The Numbers: ");
    scanf("%f", &a);

    printf("Enter The Numbers: ");
    scanf("%f", &b);

    printf("Enter The Numbers: ");
    scanf("%f", &c);

    printf("Enter The Numbers: ");
    scanf("%f", &d);


    while (i<=b)
    {
        sum1= sum1*a;
        i++;
    }
    
    sum2 = sum1/c;

    while (j<=d)
    {
        sum3 = sum3*sum2;
        j++;

    }
 
 ans = sum3;
    printf("The Answer is %f", ans);
    return 0;
}


/*
A S M SAYEM
ID: 2024-3-60-615
*/