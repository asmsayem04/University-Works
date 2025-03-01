
/*

Problem5: Write a C program that creates three int variables var1, var2, and var3, and a double variable res.
Assign 5, 10, and 15 to variables var1, var2, and var3, respectively. Then compute the value of res
variable using the formula: res = (var1 + var2 + var3)/2. Finally, display the value of res variable on
the screen. Note that, you need to make sure that the division is floating-point division, and not an
integer division.

*/
#include <stdio.h>

int main() 
{
    int var1, var2, var3;            
    double res;  

    var1 = 5; 
    var2 = 10;
    var3 = 15;
      
    
    
    res = (var1 + var2 + var3) / 2;

  
    printf("The result is: %f\n", res);

    return 0;
}

/*
A.S.M Sayem
Id: 2024-3-60-615
*/
