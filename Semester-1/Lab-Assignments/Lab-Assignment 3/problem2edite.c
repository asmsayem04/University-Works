#include <stdio.h>

int main()
{
    int entered_number, sum_of_even = 0, sum_of_odd = 0;

    
    do
    {
        printf("Enter any Number: ");
        scanf("%d", &entered_number);

       
        if (entered_number == 0)
        {
            printf("0 is not Even or Odd. Program is ended.\n");
           
            entered_number = 0;  
        }
        else if (entered_number % 2 == 0)
        {
            sum_of_even += entered_number; 
        }
        else
        {
            sum_of_odd += entered_number;  
        }

        
        if (entered_number != 0)
        {
            printf("Sum of Even Numbers: %d\n", sum_of_even);
            printf("Sum of Odd Numbers: %d\n", sum_of_odd);
        }

    } while (entered_number != 0);  
    return 0;
}
