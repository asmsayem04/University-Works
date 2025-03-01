/*
Problem2: Write a C program that creates four int variables: length, width, perimeter, and area which
represent the values of length, width, perimeter, and area of a rectangle. Assign value 20 to length
and value 10 to width. Then compute the values for the perimeter and area variables using variables
length and width. Finally display these values on the screen.
*/

#include <stdio.h>

int main() 
{
    int length = 20;
    int width = 10;
    int perimeter;         
    int area;         
    
    perimeter = 2 * (length + width);
    area = length * width;

    
    printf("The perimeter of the rectangle is: %d\n", perimeter);
    printf("The area of the rectangle is: %d\n", area);

    return 0;
}

/*
A.S.M Sayem
Id: 2024-3-60-615
*/
