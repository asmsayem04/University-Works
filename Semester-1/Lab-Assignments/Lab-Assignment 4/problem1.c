/*1. Write a program that takes five float numbers from the keyboard and puts them into an array.
Then, it takes another number and checks and counts how many numbers of the array are higher
and lower than that number.

Input:
Five numbers in an array: 3.2 4.3 1.2 6.5 8.7
Another number: 4.5
Output:
Numbers higher than 4.5: 2
Numbers lower than 4.5: 3*/


#include <stdio.h>

int hihger_count( float compare_number);
int lower_count( float compare_number);
float numbers[5];

int main(){
    for(int i = 0; i<5; i++)
    {
        printf("Enter The Number: ");
        scanf("%f", &numbers[i]);
    }

    float chk_number;
    printf("Enter Number to Check: ");
    scanf("%f", &chk_number);
    printf("Number Higher than %.3f : %d \n", chk_number, hihger_count(chk_number));
    printf("Number Lower than %.3f : %d ", chk_number, lower_count(chk_number)); 
}


 int hihger_count( float compare_number)
 {
        int j = 0;

        for(int i =0; i<5; i++)
        {
            if(compare_number<numbers[i])
            {
                j++;
            }
        }

        return j;
    }
int lower_count( float compare_number)
    { 
        int j = 0;
        for(int i =0; i<5; i++)
        {
            if(compare_number>numbers[i])
            {
                j++;
            }
        }
        return j;
    }


/*A S M Sayem
ID: 2024-3-60-615
*/