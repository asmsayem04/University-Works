/*Write a program that repeatedly takes a number as input and sums it with the previous
odd number, if the input number is odd, or sums it with the previous even number if the
number is even, and display both sums separately after each input. When 0 is entered,
the program exits by showing “0 is not Even or Odd. Program is ended.”
Input:
3
Output:
Sum of even numbers: 0
Sum of odd numbers:3
2
Output:
Sum of even numbers: 2
Sum of odd numbers:3
7
Output:
Sum of even numbers: 2
Sum of odd numbers:10*/



#include <stdio.h>

int main()
{

    int entered_number, sum_of_even = 0, sum_of_odd = 0;

    do
    {

        printf("Enter any Number: ");
        scanf("%d", &entered_number);

        if (entered_number == 0)
        {
            printf("0 is not Even or Odd");
            break;
        }
        
        else if (entered_number%2 == 0)
        {
            sum_of_even = sum_of_even+entered_number;   
        }

        else{
            sum_of_odd = sum_of_odd+entered_number;

        }
        
        printf("Sum of Even Numbers: %d\nSum of Odd Numbers: %d\n", sum_of_even, sum_of_odd);
    } while(1);
    
}

/*
A S M Sayem
ID: 2024-3-60-615
*/