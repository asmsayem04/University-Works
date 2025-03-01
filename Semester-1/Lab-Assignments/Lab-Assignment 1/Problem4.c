/*
Problem4: Write a C program that creates three float variables: value_1, value_2, and result. Assign 3.25 to
value_1 and 8.73 to value_2. Then compute the value of result variable using the formula: result =
(a+b) ^ 3 . Finally, display the value of result variable on the screen.
*/


#include <stdio.h>

int main()
 {
    float value_1, value_2, result ;    
            
    value_1 = 3.25;
    value_2 = 8.73; 

   
    result = (value_1 + value_2)* (value_1 + value_2) * (value_1 + value_2)  ;


    printf("The result is: %f\n", result);

    return 0;
}


/*
A.S.M Sayem
Id: 2024-3-60-615
*/