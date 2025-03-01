/*6. Write a program that takes a character type 2D array as input which takes English alphabets and
finds how many uppercase or lowercase letters reside in each column of that array.
Input:
A D A K
B q C f
c a b k
E r E z
Output:
Uppercase : 3 Lowercase : 1
Uppercase : 1 Lowercase : 3
Uppercase : 3 Lowercase : 1
Uppercase : 1 Lowercase : 3*/


#include <stdio.h>
char array[4][4];
void InputTaker();
void UpperLowerFinder();
int main(){

    InputTaker();
    UpperLowerFinder();
    return 0;
}
void InputTaker(){
    for (int row = 0; row<4; row++){
        for (int clm = 0; clm<4; clm++){
            printf("Enter the value for 2D Array: ");
            scanf(" %c", &array[row][clm]);
        }
    }
    printf("\n");
}
void UpperLowerFinder(){
    int upper, lower;

    for (int clm = 0; clm < 4; clm++)
    {
        upper = lower = 0;
        for (int row = 0; row<4; row++)

        {
           
            if (array[row][clm] >= 'A' && array[row][clm] <= 'Z')
            {
                upper++;
            }

            if (array[row][clm] >= 'a' && array[row][clm] <= 'z')
            {
                lower++;
            }
        }

        printf("Column %d: Uppercase: %d Lowercase: %d\n", clm + 1, upper, lower);
    }
}


 /*A S M Sayem
ID: 2024-3-60-615
*/   

    
    




   