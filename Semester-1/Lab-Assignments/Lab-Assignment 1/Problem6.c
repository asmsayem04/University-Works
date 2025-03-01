/*

Problem6: Write a C program that creates two float variables Celsius and Fahrenheit. Assign temperature value
98.6 to variable Fahrenheit. Then convert this Fahrenheit value to equivalent Celsius value (using
standard conversion formula) and assign to the Celsius variable. Finally, display the converted value
on the screen.

*/

#include <stdio.h>

int main()
 {
    float Fahrenheit, Celsius ;    

     Fahrenheit = 98.6;
               

   
    Celsius = (Fahrenheit - 32) * 5 / 9;

   
    printf("The equivalent Celsius temperature is: %f\n", Celsius);

    return 0;
}



/*
A.S.M Sayem
Id: 2024-3-60-615
*/