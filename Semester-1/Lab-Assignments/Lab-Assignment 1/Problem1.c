/*

Problem1: Write a C program that creates three int variables: num1, num2, and result. Assign value 3 to num1
and value 4 to num2. Then compute the value of result variable using the formula:
result = (num1+num2)^2 . Finally, display the value of result variable on the screen.

*/


#include <stdio.h>


int main() 
{
    int num1 = 3;      
    int num2 = 4;      
    int result;        

    
    result = (num1 + num2)* (num1 + num2);

    
    printf("The result is: %d\n", result);

    return 0;
}


/*
A.S.M Sayem
Id: 2024-3-60-615
*/