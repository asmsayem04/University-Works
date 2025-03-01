/*
3. Take 10 numbers (integer) from the keyboard and put them in an array. Display all the prime
numbers in the array. Use a function to check if the element of the array is prime or not.
Input:
1 2 3 4 5 6 7 8 9 10
Output:
2 3 5 7
*/

#include <stdio.h>
int Numbers[10];
void Input_Taker();
void Prime_Checker();

void main(){
    Input_Taker();
    Prime_Checker();
}
void Input_Taker()
{
    for (int i = 0; i < 10; i++)
    {
        printf("Enter The Numbers : ");
        scanf("%d", &Numbers[i]);
    }
}
void Prime_Checker()

{
    
    for (int i = 0; i < 10; i++)
    { 

        int prime_chk = 1;
        if (Numbers[i] <= 1 || Numbers[i] == 0)
        {
            continue;
        }

        if (Numbers[i] == 2)
        {
            printf("%d ", Numbers[i]);
            continue;
        }

        if (Numbers[i] % 2 == 0)
            continue;

        for (int j = 2; j < Numbers[i]; j++)

          {  
            if (Numbers[i] % j == 0)
            {
                prime_chk = 0;
                break;
            }
            }
        if (prime_chk == 1)
        printf("%d ", Numbers[i]);        
    }
}

/*A S M Sayem
ID: 2024-3-60-615
*/