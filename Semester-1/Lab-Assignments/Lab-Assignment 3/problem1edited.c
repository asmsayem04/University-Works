#include <stdio.h>

int main()
{
    int given_number, concated_number = 0;

    
    do
    {
        
        printf("Enter any Number: ");
        scanf("%d", &given_number);

        
        if (given_number >= 0)
        {
            
            concated_number = concated_number * 10 + given_number;

            
            printf("%d\n", concated_number);
        }

    } while (given_number >= 0); 
    printf("Program is ended.\n");

    return 0;
}
