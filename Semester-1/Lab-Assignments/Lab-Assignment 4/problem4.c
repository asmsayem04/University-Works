/*4. Take 10 ASCII values of letters (which can be a capital letter or a small letter) from the keyboard
and put them in an array. Display the letters and show how many capital and small letters this array
has.

Input:
65 72 97 103 79 82 114 116 120 99
Output:
Letters: A H a g O R r t x c
Capital Letters: 4
Small Letters: 6
*/

#include <stdio.h>
int ASCII[10];
void Input_Taker();
void Letter_Checker();

void main(){
    Input_Taker();
    Letter_Checker();
}

void Input_Taker()
{
    for (int i = 0; i < 10; i++)
    {
        printf("Enter The ASCII Values Between 65 to 90 and 97 to 122: ");
        scanf("%d", &ASCII[i]);
    }
}

void Letter_Checker()
{
    int capital = 0;
    int small = 0;
    printf("Letters: ");

    for (int i = 0; i < 10; i++)
    {
        if (ASCII[i]>=65 && ASCII[i]<=90)
        {
            capital++;
        }
        else if (ASCII[i]>=97 && ASCII[i]<=122)
        {
            small++;
        }
        printf("%c ", ASCII[i]);    
    }
        printf("\n");
        printf("Capital Letters: %d\n", capital);
        printf("Small Letters: %d\n", small);
}

/*A S M Sayem
ID: 2024-3-60-615
*/