/*
5. Write a program that takes an integer type 2D array as input and finds the maximum and minimum
number of each row of that array. Also, find the sum of each column.
Input:
2   4  1  10
11  5  9  15
32  2  11 22
21  50 2  12

Output:
Maximum: 10 Minimum: 1
Maximum: 15 Minimum: 5
Maximum: 32 Minimum: 2
Maximum: 50 Minimum: 2
Sum of each column :
66
61
23
59
*/


#include <stdio.h>
int array[4][4];
void Input_Taker();
void MaxMin_Finder();
void Column_Sum();

void main(){
    Input_Taker();
    MaxMin_Finder();
    Column_Sum();
    }

void Input_Taker(){

    for ( int row = 0; row<4; row++){

        for (int clm = 0; clm<4; clm++){
            printf("Enter the value for 2D Array: ");
            scanf("%d", &array[row][clm]);
        }
    }
    printf("\n"); 
}

void MaxMin_Finder(){
    int max, min;
   for (int row = 0; row< 4 ; row++){
     max = min = array[row][0];
     for ( int colm = 0; colm <4; colm++){
        if (array[row][colm] > max){
            max = array[row][colm];
        }
        if (array[row][colm] < min){
            min = array[row][colm];
        }
     }
        printf("Row %d: Maximum: %d Minimum: %d  \n", row+1, max, min);
   }
    }

void Column_Sum(){
    int sum;
    for (int colm = 0; colm < 4; colm++){
        sum = 0;
        for (int row = 0; row < 4; row++){
            sum = sum + array[row][colm];
        }
        printf("\nSum of Column %d: %d", colm+1, sum);
    }
}


/*A S M Sayem
ID: 2024-3-60-615
*/
