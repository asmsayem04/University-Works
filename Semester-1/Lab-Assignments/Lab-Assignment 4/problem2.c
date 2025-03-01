/*
2. Write a program that takes 5 integer values in two arrays as input and finds the maximum and
minimum number from the arrays. Also, display which array has the highest number and which one
has the lowest number.

Input:
1st array: 1 2 3 4 5
2nd array: 6 7 8 9 10
Output:
Maximum: 10 Array Number: 2
Minimum: 1 Array Number: 1
*/

#include <stdio.h>
int first_array[5];
int second_array[5];
void Input_Taker();
void Maximum_Finder();
void Minimum_Finder();
void main(){
    Input_Taker();
    Maximum_Finder();
    Minimum_Finder();
    }
void Input_Taker(){
    for(int i = 0; i<5; i++)
    {
        printf("Enter The Numbers for 1st Array : ");
        scanf("%d", &first_array[i]);
    }

     for(int i = 0; i<5; i++)
    {
        printf("Enter The Numbers for 2nd Array : ");
        scanf("%d", &second_array[i]);
    }
}
void Maximum_Finder(){

    int max1 = first_array[0];
    int max2 = second_array[0];
    for ( int i = 0; i<5; i++)
    {
        if (max1< first_array[i])
        {
            max1 = first_array[i];
        }
        if (max2< second_array[i])
        {
            max2 = second_array[i];
        }
    }
    if (max1>max2)
    {
        printf("\nMaximum: %d Array Number: 1\n", max1);
    }
    else
    {
        printf("\nMaximum: %d Array Number: 2\n", max2);
    }

}
void Minimum_Finder(){

    int min1 = first_array[0];
    int min2 = second_array[0];
    for ( int i = 0; i<5; i++)
    {
        if (min1> first_array[i])
        {
            min1 = first_array[i];
        }
        if (min2> second_array[i])
        {
            min2 = second_array[i];
        }
    }
    if (min1<min2)
    {
        printf("Minimum: %d Array Number: 1", min1);
    }
    else
    {
        printf("Minimum: %d Array Number: 2", min2);
    }
}



/*A S M Sayem
ID: 2024-3-60-615
*/