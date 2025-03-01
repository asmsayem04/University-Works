/*4. Write a C program to print the following pattern:
*
* *
* * * *
* * * * * * * *
* * * * * * * * * * * * * * * * 
 
*/

#include <stdio.h>

void printPattern(int n) {
    int i, j;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("* ");
        }
        printf("\n");
    }
}

int main() {
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    printPattern(n);

    return 0;
}

/*
A.S.M Sayem
ID: 2024-3-60-615
*/

