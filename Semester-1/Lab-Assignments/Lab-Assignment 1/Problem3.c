/*
Problem3: Write a C program that creates four float variables: radius, diameter, perimeter, and area which
represent the values of radius, diameter, perimeter, and area of a circle. Assign value 7.5 to radius
variable. Then compute the values for the diameter , perimeter, and area variables using variable
radius. Finally, display these values on the screen. Use 3.1416 for the value of π.
*/


#include <stdio.h>

int main() 
{
    
    float diameter, perimeter, area, radius; 

    radius = 7.5;        
         
    float PI = 3.1416;  

    diameter = 2 * radius;
    perimeter = 2 * PI * radius;
    area = PI * radius * radius;


    printf("The diameter of the circle is: %f\n", diameter);
    printf("The perimeter (circumference) of the circle is: %f\n", perimeter);
    printf("The area of the circle is: %f\n", area);

    return 0;
}



/*
A.S.M Sayem
Id: 2024-3-60-615
*/